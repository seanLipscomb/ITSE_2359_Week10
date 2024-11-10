#include <iostream>

using namespace std;

void functA(int n);
void functB(int n);

void functA(int n){
    if (n<=0) return; // base case
    cout << "Function A: " << n << endl;
    functB(n-1); // calls functB, creating indirect recursion
}
void functB(int n){
    if (n<=0) return; // base case
    cout << "Function B: " << n << endl;
    functA(n-2); // calls functA, creating indirect recursion
}


int recursiveFunction(int n)
{
    // output each n to the terminal at each call of the function
    cout << n << endl;

    // Base case: stops recursion
    if (n==0)
    {
        return 0;
    }

    // General case: reduces problem size
    else
    {
        return n + recursiveFunction(n-1);
    }

}

int fact(int n)
{
    // output each n to the terminal at each call of the function
    cout << n << endl;

    // Base case: stops recursion
    if (n==1)
    {
        return 1;
    }

    // General case: reduces problem size
    else
    {
        return n * fact(n-1);
    }

}


int main()
{
    functA(5);
    return 0;
}