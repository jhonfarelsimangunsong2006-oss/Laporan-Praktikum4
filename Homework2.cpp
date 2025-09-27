#include<iostream>
using namespace std;

int main()
{
    int x;
    while(true){
    cout<<"masukkan nilai x: ";
    cin>>x;
    int a=1 , b=1 ,c;
    if(x==1){
        cout<<"nilai fungsi y: "<<a<<endl;
    }else if(x==2){
        cout<<"nilai fungsi y: "<<b<<endl;
    }else{
        for(int i=3 ; i<=x ; i++){
            c=a+b;
            a=b;
            b=c;

        }
           cout<<"nilai fungsi y: "<<b<<endl;
        }


    }



    return 0;
}
