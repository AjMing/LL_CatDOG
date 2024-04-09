#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
void menu(); // Finish your menu to choose cat or dog.
int main(int argc, char *argv[])
{  LL A;
   int i;
   NODE *t;

 while(i=menu()!=3){
 /* modified main to either add cat or dog*/
  
   
        if(i==1)   t=new cat;
         else  t=new dog;
         // t=new NODE(atoi(argv[i]));
           A.add_node(t);
 }
   
   A.show_all();


    
}
