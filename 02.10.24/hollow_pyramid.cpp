// Holow Pyramid Star

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i , j;

    for(i = 1; i<=n; i++) {
      for(j = 1; j<=(n-i); j++) { //print the blank spaces before star
         cout << " ";
      }
      if(i == 1 || i == n) { //for the first and last line, print the stars continuously
         for(j = 1; j<=i; j++) {
            cout << "* ";
         }
      }else{
         cout << "*"; //in each line star at start and end position
         for(j = 1; j<=2*i-3; j++) { //print space to make hollow
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
}

// n = 4
// i =1 , 
// ---*-
// --*-*   i = 2
// -*---* i = 3
// *-*-*-* i = 4 || i == n
