#include <iostream>

using namespace std;
int summa (int *t, int N)
{
    for (int i=1; i<N; i++)
        {
        *t+=t[i];
        }
return *t;
}

int main()
{
    int N, *t;
    cout << "amount of numbers?" << endl;
    cin >> N;
    cout << "insert your numbers" << endl;
    for (int i=0; i<N; i++)
    {
        cin >> t[i];
    }
    summa(t, N);
    cout << "sum of numbers " << *t << endl;
    return 0;
}

