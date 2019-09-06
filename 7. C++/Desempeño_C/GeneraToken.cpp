// Probando C-string.

#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

string generateString(){
    
    static const char alphanum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    string s = "";
    for (int i = 0; i < 3; ++i) {
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    } 

    return s;
}


void function(){
    srand (time(NULL)); 
    int N = 17576;
    // cout<<"Ingresa N:"<<endl;
    // cin >> N;

    // SOLUCION
    char *cadenota = (char*) malloc(sizeof(char)*1);
    char IPN[] = "IPN";
    string stringVariable;
    int countIPN = 0;

    for (int i = 0; i < N; i++)
    {
        // CONVERTIMOS EL STRING A UN ARRAY DE CHAR
        string stringG = generateString();
        stringG += " ";
        char auxString[stringG.size() + 1];
        strcpy(auxString, stringG.c_str());

        if (strcmp(auxString, "IPN ") == 0)
        {
            countIPN++;
        }
        
        // CONCATENAMOS DOS ARRAYS DE CHAR
        cadenota = (char*) realloc(cadenota, (strlen(cadenota) + strlen(auxString) + 1) * sizeof(char));
        memcpy(cadenota + strlen(cadenota), auxString, strlen(auxString) +1);
    }

    // cout<<cadenota<<endl;
    cout<<countIPN<<endl;
    // cuentaIPN(cadenota);
}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
