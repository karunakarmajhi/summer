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

class queue{
            public:
            node* head;
            queue(){
                    head = NULL;
                    }

	void enqueue(int newval){
			        node * temp = new node(newval);
			        temp->next = head;
			        head = temp;
		    }
	void display(){
		        node * current = head;
		        while(current != NULL){
		            cout << current->val << "->";
		            current = current-> next;
			        }
		        cout << "NULL" << endl;
		      }

	int count(){
		        // start at head
        		node * current =  head;
        		int cnt = 0;
        		while (current != NULL){
            					cnt++;
            					current = current->next;
        					}
        			return cnt;
    			}
        node*getend(){
                      int c = 1;
                      node*current= head;
                      while(c< count())
                           {
                            current = current->next;
                            c++;
                            }
                       return current;
                      }


	void dequeue(){
                       if(head!=NULL){
                                      node * current = head;
                                      node * temp = getend();
                                      if(head->next == NULL){
                                                             head = NULL;
                                                             delete current;
                                                            }
                                      else{
                                           while(current->next-> next !=NULL){
                                                                              current = current->next;
                                                                             }
                                           current->next = NULL;
                                           delete temp;
                                          }
                                      
                                     }
                       else {
                             cout << " no more elements to dequeue" << endl;
                            }
	
                                     
                       }
};

class stack{
            public:
            queue q1;
            queue q2;
            node*top;
            stack(){
                    top = q1.head;
                    }

            void display(){
                           q1.display();
                          }

            void push(int newval){
                                  q1.enqueue(newval);
                                 }
            void pop(){
                       node * current = q1.head;
                       if(current!=NULL){
                                         while(current!=NULL){
                                                              q2.enqueue(current->val);
                                                              current = current-> next;
                                                             }
                                         while(q1.head!=NULL){
                                                              q1.dequeue();
                                                              }
                                         q2.dequeue();
                                         node * temp = q2.head;                    
                                         while(temp!=NULL){
                                                              q1.enqueue(temp->val);
                                                              temp = temp-> next;
                                                          }
                                         while(q2.head!=NULL){
                                                              q2.dequeue();
                                                             }
                                         }
                      else{
                           cout << " no more elements to pop" << endl;
                         }
                 }
                       
           
   };

int main(){
           stack s1;
           for(int i = 1; i<6 ; i++)
              {
                s1.push(i);
               }
           s1.display();
           s1.pop();
           s1.display();
           s1.pop();
           s1.display();
           s1.pop();
           s1.display();
           s1.pop();
           s1.display();
           s1.pop();
           s1.display();
           s1.pop();
           s1.display();

        }

