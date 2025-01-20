#include <iostream>
using namespace std;
int main(){

int a = 7224;
int b;
cout<<"enter your atm pin";

cin>>b;


if(a==b){
    cout<<"collect cash";
  cout<<endl;
}
else{
    cout<<"wrong password try again";
   
    cin>>b;
    if(a==b){
        cout<<"collect cash";
        cout<<endl;

    }
    else{
        cout<<" wrong password try again";
        cin>>b;
        if(a==b){
            cout<<"collect cash";
        }
        else{
            cout<<"last try:";
            cout<<endl;
            cin>>b;
            if(a==b){
                cout<<"collect cash";
            }
            else{
                cout<<"card blocked";
                cin>>b;
                if (a==b)
                {
                    cout<<"collect cash";
                }
                else{
                    cout<<"end ";
                }
            }

        }
        
    }
}

}