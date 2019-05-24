#include<iostream>
using namespace std;
class node{
           public:
           int val;
           node*next;
           
           node(int newval){
                 val = newval;
                 next = NULL;
                 
                
          }
};
class linkedlist{
                 public:
                 node*head;
                 linkedlist(){
                             head = NULL;
                             }
                             void insert(int newval){
                                                     node*temp = new node(newval);
                                                     temp-> next = head;
                                                     head = temp;
                                                     }


void display(){
               node*current = head;
               while(current != NULL){
                     cout << current-> val << "->";
                     current = current -> next;
                     }
                     cout << "NULL" << endl;
}
};

int main(){
           linkedlist l1;
           for (int i = 1 ; i< 10 ; i++)
           {
            l1.insert(i);
           }
           l1.display();
}

                                       
