// This Project is made by AKSHAT NEMA
// Project is on Login/Registration system

#include <bits/stdc++.h>
using namespace std;

void reg()
{
    string name,password;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your password:";
    cin>>password;
    ofstream file;
    file.open(name+".txt");
    file<<name<<endl;
    file<<password;
    file.close();
    return ;
}

bool login()
{
    string name,password,n,pw;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your password:";
    cin>>password;
    ifstream file(name+".txt");
    getline(file,n);
    getline(file,pw);
    if(n==name && pw==password)
    {
        return true;
    }
    else
     return false ;

}

int main()
{
    system("cls");
    cout<<"1.REGISTER \n 2. LOGIN \n Enter your choice: ";
    int n;
    cin>>n;
    if(n==1)
    {
        reg();
        return 0;
    }
    else if(n==2){
      if(login())
        cout<<"Login successful";
      else
       cout<<"Login unsuccessful";
      return 1;
    }
    else
     {
         cout<<"Wrong choice entered \n";
        main();
     }
    return 0;
}