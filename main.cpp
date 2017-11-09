#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"introduce un numero_"<<endl;
    cin>>x;
    if(x<=5)
    {
        if(x%3==0)
        {
            x=x+2;
            cout<<"tu numero es_"<<x<<endl;
        }
        else
        {
            cout<<"tu numero es_"<<x<<endl;
        }
    }

return 0;
}

