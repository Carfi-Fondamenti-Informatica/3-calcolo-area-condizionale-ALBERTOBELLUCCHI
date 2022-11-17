#include <iostream>
using namespace std;

int main() {
    float a, b;
    int opzione;
    cin>>a>>b>>opzione;//input

    switch(opzione){
        case 0://triangolo
            cout<<0.5*a*b<<endl;
            break;

        case 1://quadrato
            cout<<a*a<<endl;
            break;

        case 2://rettangolo
            cout<<a*b<<endl;
            break;

        default:
            cout<<"opzione non valida"<<endl;
    }

    return 0;
}
