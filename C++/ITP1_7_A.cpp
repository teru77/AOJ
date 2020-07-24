#include <iostream>
using namespace std;

int main(){
    int m,f,r;

    while(1){
        cin >>m>>f>>r;

        if(m==-1 && f==-1 && r==-1){
             break;
        }

        if (m==-1||f==-1) {
            cout << "F"<<endl;
        }
        else{
            int a=m+f;
            if(a>=80){
                cout << "A" << endl;
            }
            else if(a>=65){
                 cout << "B"<<endl;
            }
            else if(a>=50){
                cout << "C"<<endl;
            }
            else if(a>=30){
                if(r>=50){
                     cout <<"C"<< endl;
                }
                else {
                    cout <<"D"<<endl;
                }
            }
            else {
                cout << "F"<< endl;
            }
        }

    }return 0;
}
