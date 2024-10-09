#include <iostream> 
#include <vector>
using namespace std; 

struct MyStack{
   vector <int> v; 
   
   void push(int x) {
       v.push_back(x); 
   }
   
   int pop() {
       int res = v.back(); 
       v.pop_back(); 
       return res;
   }
   int size() {
       return v.size(); 
   } 
   
   bool isEmpty() {
       return v.empty(); 
   }
   int peek() {
       return v.back(); 
   }
}; 

int main() { 
    MyStack s1; 
    s1.push(7); 
    s1.push(8); 
    cout << s1.size() << endl; 
    cout << s1.peek() << endl; 
    cout<< s1.pop() << endl; 
    cout << s1.size() << endl; 
    return 0;
}