#include<iostream>
#include<fstream>
using namespace std;
int main() {

        int a ;
        while(true){
            cout<<"Masukkan Angka: ";
            cin>>a;
            if(cin.fail()){
                cout<<"bukan angka";
                break;
            }else if(a==0){
                break;
            }else{
                if(a>0){
                    if(a%2==0){
                        cout<<"genap"<<endl;
                    }else{
                        cout<<"ganjil"<<endl;
                    }
                }else{
                    cout<<"Mohon masukkan bilangan positif"<<endl;
                }
            }
        }


    return 0;
}

