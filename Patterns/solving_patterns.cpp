//patterns are never asked in interviews but they are important for logic building 
// most use outer and inner loops 


#include <iostream> 

using namespace std; 

void print2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
}
int main() {
    // qn 1
    //  ****
    //  ****
    //  ****
    //  ****
    //in each line we are printing 4 stars (4 rows , 4 stars )
    
    for(int i = 0; i< 4; i++) {
        for(int j = 0; j < 4; j++) {
           cout << "*";
        } 
        cout << endl;
    }
    
    cout << endl; 
    cout << "Question 2:" << endl;
    int i = 7;
    print2(i);
    
    
    
}
