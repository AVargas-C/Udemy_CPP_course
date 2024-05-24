#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {  
    vector<char> input{'1','2','3','4','5'};

    //Number of rows
    int n {0};
    n = input.size();
    cout << "Number of rows(n): " << n << endl;

    //Number of colums
    int m {0};
    m = (n * 2) - 1;
    cout << "Number of colums(m): " << m << endl;

    // Initializing the vector of vectors 
    vector<vector<char> > vec; 
   
  
    // Inserting elements into vector 
    for (int i = 1; i <= n; i++) { 
        // Vector to store column elements 
        vector<char> v1; 
        char x{0};
        int index {0};
        int count {0};

        for (int j = 0; j < m; j++) {
            if (j < (n-i)){
                v1.push_back('-');
            } 
            else if ((j <= (n-i)) || (j <= ((n+i)-2))) {
                if (count < i) {
                    v1.push_back(input.at(index));
                    ++count;
                    ++index;
                }
                else if (j > j/2) {
                    --index;
                    v1.push_back(input.at(index));
                }

                
                //else if (i > 5) {
                //    v1.push_back(input.at(index));
                //    --index;
                //}
            }
            
            else if (j > ((n+i)-2)) {
                v1.push_back('.');
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