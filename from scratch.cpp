#include <iostream>
using namespace std;

class node {
    public:
    int val;
    node * next; 
    // constructor
    node(int newval)
    {val = newval;
    next = NULL;}
};

class stack{
    public:
    node * head;

    stack(){
        head = NULL;
    }
    void push(int newval){
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
    

void pop(){  
             if(head!=NULL){ 
                               node*temp = head;
                               head = head-> next;
                               delete temp;
                              }
              else{cout << " no more elements to pop" << endl;}
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

int main (){
            stack s1;
            s1.push(5);
            s1.push(4);
            s1.push(3);
            s1.push(2);
            s1.push(1);
            s1.display();
            s1.pop();
            s1.pop();
            s1.pop();
            s1.pop();
            s1.display();
            s1.pop();
            s1.display();
            s1.pop();
            
            queue q1;
            q1.enqueue(5);
            q1.enqueue(4);
            q1.enqueue(3);
            q1.enqueue(2);
            q1.enqueue(1);
            q1.display();
            cout << q1.count() << endl;
            cout << q1.getend()->val << endl;
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
