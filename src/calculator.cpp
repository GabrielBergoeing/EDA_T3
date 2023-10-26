#include "../include/calculator.hpp"
#include "../include/stack.hpp"
#include "../include/abbCC.hpp"

// Funcion prec y infixToPostfix desde https://www.geeksforgeeks.org/convert-infix-expression-to-postfix-expression/

int prec(char c) {
    if (c == '^') return 3;
    else if (c == '/' || c == '*') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

std::string infixToPostfix(std::string str) {
    eda::Stack stack;
    std::string result;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        // Si es letra o numero se agrega a aux
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result+=c;
        } else if (c == '(') {    // Si es '(' se agrega al stack
            stack.push(new eda::Node("("));
        } else if (c == ')') {  // Si es ')' se busca '(' en el stack, 
            // se agregan todos los valores entre medio al string result
            while (stack.top()->getData() != "(") { 
                result += stack.top()->getData()+" ";
                stack.pop();
            }
            stack.pop();
        } else if (c == ' ') { // Por esto DEBEN haber espacios
            if (result[result.length()-1] != ' ') {
                result+=" ";
            }
        } else {    // En caso contrario debe ser una operacion
            while (!stack.isEmpty()
                && prec(str[i]) <= prec(stack.top()->getData()[0])) {
                result += stack.top()->getData()+" ";
                stack.pop();
            }
            stack.push(new eda::Node(std::string(1, c)));
        }
    }

    // Se extraen los elementos que queden en el stack
    while (!stack.isEmpty()) {
        result += " "+stack.top()->getData();
        stack.pop();
    }

    return result;
}

void asignVar(std::string expr, std::map<std::string, int> &vars) {
    int index = -1;
    std::string key, value;
    
    for (int i = 0; i<expr.length(); i++) {
        char c = expr[i];
        if (c == ' ') continue;
        
        if (c == '=') {
            index = i;
            continue;
        }

        if (index > 0) value+=c;
        else key+=c;
    }
    try {   // Para prevenir crasheos por asignar mal una variable
        int n = std::stoi(value);
    } catch(const std::invalid_argument& e) {
        std::cout << "Ingresar primero un conjunto de caracteres y luego numeros, porfavor" << std::endl;
        return;
    }

    vars[key] = std::stoi(value);
}

int sum(int a, int b) {return a+b;}
int res(int a, int b) {return a-b;}
int mult(int a, int b) {return a*b;}
int divs(int a, int b) {return a/b;}
int pot(int a, int b) {return pow(a,b);}

int solveCalculation(std::string str) {
    int ans;
    std::string aux;
    eda::Stack pila;

    // Arreglo de funciones para hacer las operaciones
    char ops[5] = {'+', '-', '*', '/', '^'};
    int (*f[])(int, int) = {sum, res, mult, divs, pot};     

    for (int i=0;i<str.length();i++) {   // Se realiza la solucion del control 2 pregunta 3 item 2
        char c = str[i];

        if (c == ' ') {
            if (aux != "") pila.push(new eda::Node(aux));
            aux="";
        } 
        else if (c <= '9' && c >= '0') aux+=c;
        else {
            for (int j = 0; j<5; j++) {
                if (c == ops[j]) {
                    int segundo = std::stoi(pila.top()->getData());
                    pila.pop();
                    int primero = std::stoi(pila.top()->getData());
                    pila.pop();
                    ans = f[j](primero, segundo);
                    std::cout << "Se realiza: " << primero << ops[j] << segundo << "=" << ans << std::endl; 
                    pila.push(new eda::Node(std::to_string(ans)));
                    break;
                }
            }
        }
    }
    return ans;
}

void printEquationTree(std::string postfix){
    char c;
    int num, t = 0;
    eda::ABBCCNode *temp = nullptr;
    eda::ABBCC binaryTree;
    std::string sum, aux, sign;
    eda::Stack numberStack, treeStack;

    // Arreglo de funciones para hacer las operaciones
    char ops[5] = {'+', '-', '*', '/', '^'};
    
    for (int idx = 0; idx < postfix.length(); idx++){ //Caso de tener 'ans'
        c = postfix[idx];
        if((postfix.find("ans") != std::string::npos) && (c == 'a') && (idx + 2 < postfix.length())){
            if((postfix[idx+1] == 'n') && (postfix[idx+2] == 's')){
                numberStack.push(new eda::Node(std::to_string(idx)));
                treeStack.push(new eda::Node("ans"));
                idx += 2;
                continue;
            }
        }
        if (c == ' ') {
            if (sum != ""){
                numberStack.push(new eda::Node(sum));
                treeStack.push(new eda::Node(sum));
                sum="";
            }
            continue;
        }
        if (isdigit(c)) sum += c; //Numbers
        else if (isOperator(c, ops)){ //Operators
            for (int j = 0; j<5; j++) {
                if (c == ops[j]) {
                    num = stoi(numberStack.top()->getData());
                    numberStack.pop();
                    num = std::max(num, stoi(numberStack.top()->getData()));
                    numberStack.pop();
                    sign = c;
                    treeStack.push(new eda::Node(sign));
                    numberStack.push(new eda::Node(std::to_string(num)));
                    treeStack.push(new eda::Node(std::to_string(num)));
                    break;
                }
            }
        } else { //Variables
            aux = c;
            numberStack.push(new eda::Node(std::to_string(t)));
            treeStack.push(new eda::Node(aux));
        }
    }

    //Segundo loop for, permite subir los nodos y symbols del arból
    while(!treeStack.isEmpty()){
        aux = treeStack.top()->getData();
        std::cout << aux <<std::endl;

        if((isOperator(aux.at(0), ops)) && (temp != nullptr)){ //Operators & Variables
            temp->setSymbol(aux.at(0));
    
        } else if (isdigit(aux.at(0))){ //Numbers
            binaryTree.insert(stoi(aux));
            temp = binaryTree.find(stoi(aux));
    
        } else { //Variables
            binaryTree.insert(t);
            temp = binaryTree.find(t);
            t++;
            temp->setSymbol(aux.at(0));
        }
        treeStack.pop();
    }
    binaryTree.traverse();

}

bool isOperator(char c, char *oplist){
    for(int j = 0; j < sizeof(*oplist)/sizeof(oplist[0]); j++){
        if(c == oplist[j]){
            return true;
        }
    }
    return false;
}