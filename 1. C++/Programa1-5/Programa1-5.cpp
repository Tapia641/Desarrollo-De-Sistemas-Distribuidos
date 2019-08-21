#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 2;
    n = n + (++n);
    cout<<n<<endl;
    return 0;
}

// Windows  6;
// Ubuntu Linux 5;
