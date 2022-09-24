#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    for(int i = 0; i<=a; i++){
        for (int j = 0; j<=b; j++){
            if (i==0 || i==a || j==0 || j==b){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}