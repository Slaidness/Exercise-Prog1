#include <iostream>

using namespace std;

char low_upp(char ch);

int main()
{
    char ch;

    cout<<"Inserire carattere: ";
    cin>>ch;
    ch=low_upp(ch);
    cout<<endl<<"Il carattere e': "<<ch<<endl;


    return 0;
}

char low_upp(char ch)
{
    char carattere;
    carattere=ch^32;
    return carattere;

    //Char contiene 2 byte, a=01100001;
    //32 in binario o 2^5=    00100000;
    //Il terzo numero in binario nelle lettere equivale per dire se è minuscolo o magliuscolo.
}
