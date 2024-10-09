#include <iostream> 
#include <climits>
using namespace std; 

struct Node {
   int data; 
   Node *next; 
   Node(int x) {
     data = x; 
     next = NULL;
   }
};

struct Stack {
    Node *head; 
    int sz; 
    
    Stack() {
        head = NULL; 
        sz = 0;
    }
    
    void push(int x) {
        Node *temp = new Node(x); 
        temp -> next = head; 
        head = temp; 
        sz ++; 
    }
    
    int pop() {
        if(head == NULL) {
            return INT_MAX;
        }
        int res = head -> data; 
        Node *temp = head; 
        head = head -> next;
        delete (temp); 
        sz --; 
        return res;
    }
    
    int size() {
        return sz; 
    }
    
    bool isEmpty() {
        return (head == NULL);
    }
    
    int peek() {
        if (head == NULL) {
            return INT_MAX;
        }
        return head -> data;
    }
    
};

int main() {
    Stack s; 
    s.push(20); 
    s.push(15); 
    s.push(45); 
    cout << s.peek() << endl; 
    cout << s.pop() << endl; 
    cout << s.peek() << endl; 
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}