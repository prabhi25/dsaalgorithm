#include <bits/stdc++.h>
using namespace std;
 
struct node {
    int val;
    node* next;
    node(int data)
    {
        val=data;
        next = NULL;
    }
};
 
struct llist {
 
    node* head;
    llist() { head = NULL; }
 
    // insert node at the starting of the list.
    void insertAtBeg(int data)
    {
        node* newNode = new node(data);
        newNode->next = head;
        head = newNode;
    }
 
    // find nth node from the end.
    void nthfromend(int n)
    {
        // create two pointers main_pr and ref_pr , both initially pointing to head.
        node* main_pr = head;
        node* ref_pr = head;
 
        // if list is NULL, then return
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
 
        // move ref_ptr to the nth node from start.
        for (int i = 1; i < n; i++) {
            ref_pr = ref_pr->next;
            if (ref_pr == NULL) {
                cout << n
                     << " is greater than no. of nodes in "
                        "the list"
                     << endl;
                return;
            }
        }
 
        // move ref_pr and main_pr by one node until ref_pr reaches end of the list.
        while (ref_pr != NULL && ref_pr->next != NULL) {
            ref_pr = ref_pr->next;
            main_pr = main_pr->next;
        }
        cout << n<< "th from end is: " << main_pr->val << endl;
    }
 
    void display()
    {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
 
// Driver's code
int main()
{
    llist ll;
 
    ll.insertAtBeg(5);
    ll.insertAtBeg(4);
    ll.insertAtBeg(3);
    ll.insertAtBeg(2);
    ll.insertAtBeg(1);
 
    ll.display();
 
    // Function call
    ll.nthfromend(2);
 
    return 0;
}
