//  Half Diamond Star Printing Pattern

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j =0; j < i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i < rows; i++){
        for(int j = 0; j < rows - i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}