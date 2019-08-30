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

void function(){
    int N;
    cout<<"Ingresa N:"<<endl;
    cin >> N;

    char *cadenota = NULL;
    int pos;
    string stringVariable;

    for (int i = 0; i < N; i++)
    {
        // CONVERTIMOS EL STRING A UN ARRAY DE CHAR
        string g = generateString();
        char auxString[g.size() + 1];
        strcpy(auxString, g.c_str());

        // CONCATENAMOS DOS ARRAYS DE CHAR
        cadenota = (char*) realloc(cadenota, pos);
        memcpy(cadenota, auxString, 4);
        cout<<cadenota<<endl;
    }

}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
