#include <iostream>
using namespace std;

const bool F = false;
const bool T = true;

int main()
{
    cout << ((T || T) && !(T && T)) << endl;
    cout << ((F || F) && !(F && F)) << endl; 
    cout << ((T || F) && !(T && F)) << endl;
    cout << ((F || T) && !(F && T)) << endl;
}

