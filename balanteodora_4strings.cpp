#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string c;
    cout<<"Introduceti un sir de caractere: ";
    cin>>c;
    char car;
    int m=0;
    cout<<"Ce caracter vom urmari: ";
    cin>>car;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]==car)
            m++;
    }
    cout<<car<<" apare in text de "<<m<<" ori"<<endl;
}
