/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {

public:
    Node* flatten(Node* head) {
        Node* temp = head;
        Node* tempS = head;
        stack <Node*> st;

        while(temp != nullptr){
            if(temp -> child != nullptr) {
                if(temp->next != nullptr)st.push(temp->next);
                temp -> next = temp->child;
                temp -> child = nullptr;
                temp -> next -> prev = temp;
            }
            tempS = temp;
            temp = temp -> next;
        }
        while(!st.empty()){
            temp = st.top();
            st.pop();
            tempS -> next = temp;
            temp-> prev = tempS;
            while(tempS->next != nullptr) tempS = tempS -> next; 
        }
        return head;
    }
};