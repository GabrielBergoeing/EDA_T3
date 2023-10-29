#include "../include/calculator.hpp"
#include "../include/stack.hpp"
#include "../include/btree.hpp"
//#include "../include/abbCC.hpp"

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
            if (c == '-' && str[i+1] != ' ') {      // Si es un numero negativo
                result+="-";
            } else {
                while (!stack.isEmpty()
                    && prec(str[i]) <= prec(stack.top()->getData()[0])) {
                    result += stack.top()->getData()+" ";
                    stack.pop();
                }
                stack.push(new eda::Node(std::string(1, c)));
            }
        }
    }

    // Se extraen los elementos que queden en el stack
    while (!stack.isEmpty()) {
        result += " "+stack.top()->getData();
        stack.pop();
    }

    return result+" ";
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
        else {  // Si no es numero o espacio...
            if (c == '-' && str[i+1] != ' ') aux+="-";
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
    }
    return ans;
}

void printEquationTree(std::string postfix){
    eda::Stack stack;
    std::string toString;
    eda::Node *left, *right, *op;
    eda::BTree tree = eda::BTree();
    char c, ops[5] = {'+', '-', '*', '/', '^'};

    int l = postfix.length();

    for(int idx = 0; idx < l; idx++){
        c = postfix[idx];
        if(isOperator(c, ops)){     //Operator
            toString = c;
            op = new eda::Node(toString);
            op->setLeft(stack.getTop());
            op->setRight(stack.getTop());
            stack.push(op);
            toString = "";
        }
        else if (c == ' '){     //End of Operate
            if(toString.compare("")) stack.push(new eda::Node(toString));
            toString = "";
        }
        else toString += c;
    }
    tree.insert(stack.getTop());
    tree.traverse();
}

bool isOperator(char c, char *oplist){
    std::string op, strc;
    for(char * j = oplist; j != oplist + sizeof(oplist)/sizeof(oplist[0]); j++){
        if(c == *j){
            return true;
        }
    }
    return false;
}