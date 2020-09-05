#include <iostream>

using namespace std;

    bool alkuluku(int n){
       if (n <= 2)
          return false;
       if (n <= 3)
       return true;
       if (n % 2 == 0 || n % 3 == 0)
          return false;
       for (int i = 5; i * i <= n; i = i + 6)
       if (n % i == 0 || n % (i + 2) == 0)
       return false;
       return true;
}
int main()
{
    int n =0;
    cout << "give number between 2-99" << endl;
    cin >> n;
    if (alkuluku(n))
       cout<<n<<" is prime number.";
    else
       cout<<n<<" is not prime number.";
    return 0;

}
