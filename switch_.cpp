#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a char: ";
    cin>>button;
    switch(button){
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"namaste"<<endl;
        break;
        case 'c':
        cout<<"salut"<<endl;
        break;
        case 'd':
        cout<<"Hola"<<endl;
        break;
        case 'e':
        cout<<"Cloa"<<endl;
        break;
        default:
        cout<<"I'm still learning!"<<endl;
        break;
    }
    return 0;
}