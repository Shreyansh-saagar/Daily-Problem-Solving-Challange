// Right Trianle Star Pattern
// *
// **
// ***
// ****

#include <iostream>
using namespace std;

int main(){
    // taking input for no. of rows
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    // Looping for each row
    for(int i = 0; i < rows; i++){
        // Internal loop for star printing
        for(int j = 0; j<i+1;j++){
            cout<<"*";
        }
        // for row change
        cout<<endl;
    }
}