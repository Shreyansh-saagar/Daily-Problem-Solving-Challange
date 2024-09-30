// Rhombus Star Printing
// ****
//   ****
//     ****
//       ****

#include <iostream>
using namespace std;

int main(){
    // taking input for no. of rows
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // looping till rows
    for(int i = 0 ; i < rows ; i++){
        // internal loop to print spaces
        for(int j = 0 ; j < i; j++){
            cout << " ";
        }
        // internal loop to print stars
        for(int k = 0 ; k < rows ; k++){
            cout<< "*";
        }
        // move to next row
        cout<<endl;
    }


    // for reverse rohmbus
    cout << endl << "Reverse Rhombus Star Printing" << endl;
    // looping till rows
    for(int i = 0 ; i < rows ; i++){
        // internal loop to print spaces
        for(int j = 0 ; j < rows - i - 1; j++){
            cout << " ";
        }
        // internal loop to print stars
        for(int k = 0 ; k < rows ; k++){
            cout<< "*";
        }
        // move to next row
        cout<<endl;
    }

    cout<<endl<<"Arrow pattern" <<endl;
    // to make arrow 
        for(int i = 0 ; i < rows ; i++){
        // internal loop to print spaces
        for(int j = 0 ; j < i; j++){
            cout << " ";
        }
        // internal loop to print stars
        for(int k = 0 ; k < rows ; k++){
            cout<< "*";
        }
        // move to next row
        cout<<endl;
    }
    for(int i = 0 ; i < rows ; i++){
        // internal loop to print spaces
        for(int j = 0 ; j < rows - i - 1; j++){
            cout << " ";
        }
        // internal loop to print stars
        for(int k = 0 ; k < rows ; k++){
            cout<< "*";
        }
        // move to next row
        cout<<endl;
    }
}