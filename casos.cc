#include<iostream>
using namespace std;
int main()
{
  char variable;
  cout<<"Dame una variable entre A,B,C,D,E"<<endl;
  cin>>variable;
  switch(variable)
    {
    case 'A': cout<<"excelente"<<endl;
      break;   
    case 'B': cout<<"muy bien"<<endl;
      break;   
    case 'C': cout<<"bien"<<endl;
      break;   
    case 'D': cout<<"pasaste"<<endl;
      break;   
    case 'E': cout<<"intenta de nuevo"<<endl;
      break;   
    default: cout<<"opcion no valida"<<endl;
    }
  return 0;
  }
