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
 
class stack{
            public:
            node * top;
            stack(){
                    top = NULL;
                   }
	void push(int newval){
                                node * temp = new node(newval);
                                temp->next = top;
                                top = temp;
                               }
   
	void display(){
                       node*current=top;
                       while(current!=NULL){
                                            cout << current-> val << "->";
                                            current = current->next;
                                           }
                       cout << " NULL" << endl;
                      }

	void pop(){
                   if(top!=NULL){
                                node* temp = top;
                                top = top->next;
                                delete temp;
                               }
                    else{
                          cout << "no more elements to delete" << endl;
                       }
                   }
                                
};

class queue{
            public:
            stack s1;
            stack s2;
            
           
            void display(){
                           s1.display();
                           }


            void enqueue(int newval){
                                     s1.push(newval);
                                    }
            void dequeue(){
                           node * current = s1.top;
                           if(current!=NULL){
                           while(current!=NULL){
                                                s2.push(current->val);
                                                current = current-> next;
                                               }
                           while(s1.top!=NULL){
                                            s1.pop();
                                           }
                           s2.pop();
                           node*temp = s2.top;
                           while(temp!=NULL){
                                             s1.push(temp-> val);
                                             temp = temp-> next ;
                                             }
                           while(s2.top!=NULL){
                                              s2.pop();
                                              }
                           }
                           else{cout<<"no elements to dequeue"<< endl;} 
                       }
    }; 

int main(){
           queue q1;
           for(int i = 1; i<6 ; i++)
              {
                 q1.enqueue(i);
              }
           q1.display();
           
           q1.dequeue();
           q1.display();
           q1.dequeue();
           q1.display();
           q1.dequeue();
           q1.display();
           q1.dequeue();
           q1.display();
           q1.dequeue();
           q1.display();
           q1.dequeue();
           q1.display();
          }
