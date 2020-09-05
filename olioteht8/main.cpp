#include <iostream>
using namespace std;
int swap(int a, int b){
int temp= 0;

    {
    temp = a;
    a = b;
    b = temp;
    cout << "values after swapping" << endl << "a = " << a << endl << "b = " << b << endl;
    }
return 0;
}
int main()
{
    int a;
    int b;
    cout << "give number for 'a'" << endl;
    cin >> a;
    cout << "give number for 'b'" << endl;
    cin >> b;
    swap(a,b);

    return 0;
}
