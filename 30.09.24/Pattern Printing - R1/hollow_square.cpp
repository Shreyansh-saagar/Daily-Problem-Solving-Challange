//Hollow Star Square Pattern
// ****
// *  *
// *  *
// ****

#include <iostream>
using namespace std;

int main(){
    // Taking row no. from user
    int rows;
    cout<<"Enter row number: ";
    cin>>rows;

    // Loop for each line of row
    for(int i = 0; i < rows; i++){
        // Internal loop for space and star printing
        for(int j = 0; j < rows; j++){
            // flow control to decide when to print star and when spaces
            if(i == 0 || i == rows-1 || j == 0 || j == rows-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        // for row change
        cout<<endl;
    }
}
