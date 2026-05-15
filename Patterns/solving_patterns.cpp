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

void print3(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void print4(int n) {
    int count = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << count << " "; 
           
            
        }
        cout << endl;
        count++;
    }
}

void print5(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n - 1; j++) {
            cout <<  " "; 
        }
        for(int j = 1; j <= 2*i - 1; j++) {
            cout <<  "*"; 
        }
       
        cout << endl;
    }
}

void print6(int n) {
    for(int i = 0; i < n; i++) {
         for(int j = 0; j < i; j++) {
            cout <<  " "; 
        }
      
          for(int j = 0; j < (n-i)*2; j++) {
            cout <<  "*"; 
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
    cout << "Question 1" << endl;
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
    cout << endl; 
    cout << "Question 2:" << endl;
    print3(i);
    cout << endl; 
    cout << "Question 3:" << endl;
    print4(i);
    cout << "Question 4:" << endl;
    print5(5);
    cout << "Question 5:" << endl;
    print6(5);
    
}
