/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void print(int n){
    if(n==0){
        return ;
    }
    print(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}