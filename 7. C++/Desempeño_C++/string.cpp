//STRING IPN C++

#include <iostream>
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
    int N;
    cout<<"Ingresa N:"<<endl;
    cin >> N;

    // SOLUCION
    string stringVariable;
    int countIPN = 0;

    for (int i = 0; i < N; i++)
    {
        string stringG = generateString();
        //stringG += " ";
        string ipn="IPN";

        if (stringG.compare(ipn)==0)
        {
            countIPN++;
        }
    }

    cout<<countIPN<<endl;
}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
