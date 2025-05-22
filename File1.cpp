#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    };    };

 // Stack class
class Stack {
private:
 Node* top; // Pointer to the top of the stack


public:
 Stack() {
  top = NULL; // initaialize the stack with a null top pointer
 }

 // Push operation: insert an element onto the top of the stack
 int push(int value) {
    Node* newNode = new Node(); // 1. Allocate memory for the new node
    newNode->data = value; // 2, assign value
    newNode->next = top; // 3. Set the next pointer of the new node to the current top
    top = newNode; // 4. Update the top pointer to point to the new node
    cout << "Push value: " << value << endl;
    return value;
 }

    // Pop operation: remove and return the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. " << endl;
        }


        Node* temp = top; // Create a temporary pointer to the top node
        top = top->next; // Update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
    }

    // Peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek()
    {
        if (top == NULL) {
            
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return the value of the top node
    }


    // IsEmpty operation: Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }

    };

    int main()
    {
        Stack stack;

        int choice = 0;
        int value;

        while (choice != 4)
        {
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Peek" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) 
            {
                case 1:
                    cout << "Enter value to push: ";
                    cin >> value;
                    stack.push(value); // Push the entered value onto the stack
                    break;
                case 2:
                    if (!stack.isEmpty()) {
                        stack.pop(); // Pop the top value from the stack
                    }
                    else {
                        cout << "Stack is empty. Cannot pop." << endl;
                    }
                    break;
                case 3:
                    if (!stack.isEmpty())
                    {
                        stack.peek(); // Get the value of the top element
                    }
                    else
                    {
                        cout << "Stack is empty. No top element." << endl;
                    }
                    break;

                case 4:
                    cout << "Exiting program." << endl;
                    break;
         