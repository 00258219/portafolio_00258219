#include <iostream>
#include <stack>

using namespace std;

int takeLastLikePeek(stack<int> s){
    int devolver;
    while(!s.empty()){
        devolver = s.top();
        s.pop();
    }
    return devolver;
}


// Stack implementation in C++ using std::stack
int main()
{
    stack<int> s;
    
    s.push(7);    // Insert "A" in the stack
    s.push(23);    // Insert "B" in the stack
    s.push(4);    // Insert "C" in the stack
    s.push(445);    // Insert "D" in the stack
    
    // Returns the number of elements present in the stack
    cout << "Stack size is " << s.size() << endl;
    
    // Prints the top of the stack ("D")
    cout << "Top element is: " << s.top() << endl;
    
    
    s.pop();    // removing the top ("D")
    s.pop();    // removing the next top ("C")
    
    cout << "Stack size is " << s.size() << endl;
    
    // check if stack is empty
    if (s.empty())
        cout << "Stack is Empty\n";
    else
        cout << "Stack is not Empty\n";
    
    
    cout << endl << "Get the bottom element" << endl;
    cout << "Bottom element is: " << takeLastLikePeek(s) << endl;
    
    
    return 0;
}
