#include<iostream>
using namespace std;
class area{
public:
             int r; 
             double pi;
             int l,b;
             area(){
                      r= 2;
                      pi = 3.14;
                      l= 2;
                      b = 2;
                      }
            int arearectangle(){
                                return l*b;
                                }
             double areacircle(){
                        return pi*r*r;
                        }
};
int main(){
           area c1;
           area r1;
           cout << c1.areacircle()<< endl;
           cout << r1.arearectangle()<< endl;

}


