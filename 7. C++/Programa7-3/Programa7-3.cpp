// Probando C-string.

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string generateString(){
    
    static const char alphanum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    string s = "";
    for (int i = 0; i < 3; ++i) {
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    } 

    return s;
}

void cuentaIPN(char *cadenota){

    // OPCION 1
    string temporalIPN = "";
    for (int i = 0, j = 0; i < strlen(cadenota); i++)
    {
        if (j == 2)
        {
            temporalIPN += cadenota[i-2];
            temporalIPN += cadenota[i-1];
            temporalIPN += cadenota[i];

            cout<<temporalIPN<<endl;
            temporalIPN = "";
            j = 0;
        }

        if (cadenota[i] != ' ')
        {
            j++;
        }
    }
}

void function(){
    srand (time(NULL)); 
    int N;
    cout<<"Ingresa N:"<<endl;
    cin >> N;

    // SOLUCION
    char *cadenota = (char*) malloc(sizeof(char)*1);
    string stringVariable;
    int countIPN = 0;

    for (int i = 0; i < N; i++)
    {
        // CONVERTIMOS EL STRING A UN ARRAY DE CHAR
        string stringG = generateString();
        stringG += " ";
        char auxString[stringG.size() + 1];
        strcpy(auxString, stringG.c_str());

        if (auxString == "IPN")
        {
            countIPN++;
            cout<<"HAY IPN"<<endl;
        }
        

        // CONCATENAMOS DOS ARRAYS DE CHAR
        cadenota = (char*) realloc(cadenota, (strlen(cadenota) + strlen(auxString) + 1) * sizeof(char));
        memcpy(cadenota + strlen(cadenota), auxString, strlen(auxString) +1);
        // cout<<cadenota<<endl;
    }

    cout<<cadenota<<endl;
    // cuentaIPN(cadenota);
}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
