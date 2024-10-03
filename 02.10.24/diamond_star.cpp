// Diamond Star Pattern Printing

#include <iostream>
using namespace std;

int main(){
    // taking input for no. of rows
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i -1; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < 2 * i + 1; k++){
            cout << "*";
        }
        cout<<endl;
    }
    // inverting the pyramid to create diamond
    for(int i = 0; i < rows; i++){
        int space = i;
        for(int j = 0; j < 2 * rows - i - 1; j++){
            if(space){
                cout<<" ";
                space--;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}