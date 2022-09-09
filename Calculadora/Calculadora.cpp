// Calculadora.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream> 
#include "Calculator.h"
using namespace std;


int main()
{

    double x = 0.9;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';


    cout << "aplicativo de calculadora " << endl << endl;
    cout << "Por favor entra com operador. Formato: a+b | a-b | a*b | a/b " << endl;

   
    Calculator c;
     while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception " << endl;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        
        cout << "Result is: " << result << endl;
    }
    return 0;
}

