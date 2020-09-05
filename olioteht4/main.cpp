#include<iostream>
using namespace std;

int main()
{
   float fahr, cel;
   char vaihtoehto;

   cout << "Valitse vaihtoehto:" << endl;
   cout << "1. Celsiukset farenheiteiksi." << endl;
   cout << "2. Farenheitit celssiuksiksi." << endl;
   cin >> vaihtoehto;

    if (vaihtoehto == '1')
    {
        cout << "Lämpötila celssiuksina" << endl;
        cin >> cel;

        fahr = (1.8 * cel) + 32.0;
        cout << " lämpötila farenhaitteina " << fahr << " F" << endl;
   }
    else if (vaihtoehto == '2')
    {
        cout << "Lämpötila farenhaitteina" << endl;
        cin >> fahr;

        cel = (fahr - 32) / 1.8;
        cout << "Lämpötila celssiuksina " << cel << " C" << endl;
   }

   return 0;
}
