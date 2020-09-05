#include <iostream>

using namespace std;

int main()
{
    string etunimi,sukunimi;
    int ika;

        cout << "Mika on etunimesi sukunimesi ja ikasi" << endl;
        cin >> etunimi >> sukunimi >> ika;
        cout << "sina olet " << etunimi << " " << sukunimi << " ja sina olet " << ika << " vuotta vanha" << endl;
    if (ika < 18)
        {
        cout << "olet alaikäinen" << endl;
}
    else if (ika > 68)
        {
        cout << "olet eläkelläinen" << endl;
    }
    else
        {
        cout << "olet työikäinen" << endl;
    }
    return 0;
}
