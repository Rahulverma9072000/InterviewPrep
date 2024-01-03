#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int j = 21;
    int const *p = &i;
    p = &j;
    cout << (*p) <<" "<<i<< endl;
    return 0;
}