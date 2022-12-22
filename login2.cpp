#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool logged()
{
    string username ,password,user,pss;
    cout<<"enter your username:\t";
    cin>>username;
    cout<<"enter your password:\t";
    cin>>password;
    ifstream read("file.txt");
        getline(read,user);
        getline(read,pss);
    if(username==user &&password==pss)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int choi;
    cout<<"\n1.regeter\n2.login\nenter your choice\n";
    cin>>choi;
    switch(choi)
    {
        case 1:
        {
            string username,password;
            cout<<"create new username:\t";
            cin>>username;
            cout<<"create new password:\t";
            cin>>password;
             ofstream file ;   
          
          file.open("file.txt");  

          file<<username<<endl ;
          file<<password ; 

          file.close() ;

         main();
        }
        case 2:
        {
            bool b=logged();
            if(!b)
            {
                
               cout<<"your username or password  is incorrect, please check again ."<<endl; 
               system("PAUSE");
               return 0; 
            }
            else{
                cout<<"login succesfull ."<<endl; 
               system("PAUSE");
               return 1 ; 
            }
        }
    }
}