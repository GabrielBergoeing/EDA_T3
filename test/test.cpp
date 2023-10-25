#include"calculator.hpp"
#include"abb.hpp"

int main() {
    std::cout << """"""" CALCULADORA INTERACTIVA """"""" << std::endl;
    std::string expresion;
    std::map<std::string, int> variables;
    variables["ans"] = 0;

    while (true) {
        std::cout << "$ ";
        std::getline(std::cin, expresion);
        if (expresion == "FIN") break; 
        else if (expresion == "ans") std::cout << "= " << variables["ans"] << std::endl;
        else if (expresion == "tree") {
            /* * * * * * * * * * * * * 
              funcion de abb! traverse 
             * * * * * * * * * * * * */
        } else {    // Entonces se ve si es asignacion y sino, es expresion
            bool isAsign = false;
            for (int i = 0; i<expresion.length(); i++) {
                char c = expresion[i];
                if (c == '=') { // Si se encuentra un '=' se asume asignacion
                    asignVar(expresion, variables);
                    isAsign = true;
                    break;
                }
            } if (!isAsign) {
                std::string exp = infixToPostfix(expresion);    // Se convierte a postfija
                std::cout << "En expresion postfija: " << exp << std::endl;
                std::string aux, exp_final;

                for (int i=0;i<exp.length();i++) {      // Se reempalzan las variables, si hay
                    char c = exp[i];

                    if (c == ' ') {
                        if (aux != "") {
                            exp_final+=std::to_string(variables[aux]);
                            std::cout << aux << " es " << variables[aux] << std::endl; 
                        }
                        exp_final+=' ';
                        aux="";
                        continue;
                    }
                    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) aux+=c;
                    else  exp_final+=c;
                }

                // Finalmente se realiza el calculo
                variables["ans"] = solveCalculation(exp_final);
                std::cout << "El resultado final es: " << variables["ans"] << std::endl;
            }
        }
    }
    return 0;
}