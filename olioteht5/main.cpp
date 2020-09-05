#include <iostream>

using namespace std;

int main()
{
    signed int cel = -50;
    signed int far = -58;

    cout << "c  " << "  f" << endl;
    for (int x = 0; x <= 30; ++x)
        {
        cout << cel << "  " << far << endl;
        cel= cel+5;
        far= far+9;
    }

    return 0;
}
