#include <iostream> 

using namespace std; 

struct Queue {
    int* arr;
    int size;
    int cap; 
    
    Queue(int c) {
        cap = c; 
        size = 0;
        arr = new int [cap];
    }
    
    bool isFull() {
        return (size == cap);
    }
    
    bool isEmpty() {
        return (size == 0); 
    }
     
    void enque(int x) {
        if(isFull()) {
            return; 
        }
        arr[size] = x; 
        size++;
    }
    
    int deque() {
        if(isEmpty() ) {
            return -1; 
        }
        int res = arr[0]; 
        for(int i= 0; i<size-1; i++) {
            arr[i] = arr[i+1]; 
            size--;
        }
        return res; 
    }
    
    int getFront() {
        if(isEmpty()) {
            return -1;
        }
        else {
            return arr[0];
        }
    }
    
    int getRear() {
        if(isEmpty()) {
            return -1;
        }
        return arr[size]; 
    }
};

int main() { 
    Queue q(5); 
    q.enque(5); 
    q.enque(6); 
    q.enque(7); 
    cout << q.deque() << endl; 
    cout << q.getFront() << endl; 
    cout << q.getRear() << endl; 
    cout << q.size << endl; 
}
