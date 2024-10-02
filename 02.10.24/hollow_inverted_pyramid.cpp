// Hollow Inverted Pyramid

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // row count manage
    for(int i = n; i > 0 ; i--){
        for(int j = n; j > i; j--){
            cout<<" ";
        }

        for(int k = 0; k < i * 2 - 1; k++){
            if(i == n){
                cout<<"*";
            }else{
                if(k==0||k==i*2-2)     
                     {
                        cout<<"*";
                     }
                  else  
                     {
                        cout<<" ";
                     }
            }
        }

        cout<<endl;
    }
}

// ******* i = 0, space = 0, star = 7
// -*---*- i = 1, space = 2 + 3 , star = 2
// --*-*--
// ---*---