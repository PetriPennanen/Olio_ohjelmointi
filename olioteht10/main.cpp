#include <iostream>

using namespace std;

int strcount(char *s,char c)
{
    int count= 0;
    while (*s)
    {
        if ((*s)==c)
            count++;
        s++;
    }
    return count;
}

int main()
{
    char s[]="olio-ohjelmointi";
    char c;
    cout << "what letter we are after" << endl;
    cin.get(c);
    cout << "letters found " << strcount(s,c) << endl;
    return 0;
}
