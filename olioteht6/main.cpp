#include <iostream>

using namespace std;

bool vertaa (int a,int b);

int main ()
{
    int a, b;
    cout << "input first number" << endl;
    cin >> a;
    cout << "input second number" << endl;
    cin >> b;
    vertaa(a,b);
    return 0;
}

    bool vertaa(int a, int b)
    {
        if (a==b)
        {
            cout << "numbers were equal";
            return true;
        }
        else
            cout << "number were not equal";
            return false;
    }
