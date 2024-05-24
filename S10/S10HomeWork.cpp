#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {    
    //Number of rows
    int n {0};
    cout << "Number of rows: ";
    cin >> n;

    //Number of colums
    int m {0};
    m = (n * 2) - 1;
    cout << "Number of colums: m: " << m << endl;

    // Initializing the vector of vectors 
    vector<vector<char> > vec; 
   
  
    // Inserting elements into vector 
    for (int i = 1; i <= n; i++) { 
        // Vector to store column elements 
        vector<char> v1; 

        for (int j = 0; j < m; j++) {
            if (j < (n-i)){
                v1.push_back('.');
            } 
            else if ((j <= (n-i)) || (j <= ((n+i)-2))) {
                v1.push_back('X');
            }
            else if (j > ((n+i)-2)) {
                v1.push_back('-');
            }
        } 
        // Pushing back above 1D vector 
        // to create the 2D vector 
        vec.push_back(v1); 
    } 
  
    // Displaying the 2D vector 
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 
    return 0;
}