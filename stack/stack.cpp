#include <bits/stdc++.h>
using namespace std;

int Stack[5], ind;  //array and variable declaration

void push (int x) {  //push function will help to insert the element into the stack.
  ++ind;
  Stack[ind] = x;
}

bool isEmpty () { //isEmpty function will check whether the stack is empty or not.
  if (ind >= 1) return false;
  return true;
}

int top() {
  return Stack[ind];
}

int pop() {         //pop function will remove the element from the stack followed by FIFO order.
  int val = Stack[ind];
  Stack[ind] = 0;
  --ind;
  return val;
}

int main(void) {
  ind = 0;
  push(1);
  push(2);

  for(int index = 0; index < 5; index++) cout << Stack[index] << " "<<endl;

  if (!isEmpty()) cout <<"Top value in stack: "<< top() << endl;

  //function calling
  pop();
  pop();

  for(int index = 0; index < 5; index++) cout << Stack[index] << " "<<endl;

  return 0;
}
