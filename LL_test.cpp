#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
/*1.Create a constructor & Destructor according to its type.   */

/*4.Create a snap_finger (in LL class or in class inherited from LL) to randomly delete half of the node */

int main(int argc, char *argv[])
{  LL A;
   int i;
   NODE *t;

   for(i=1;i<argc;i++) {
     /* modify to argument for cat or dog*/
        if(i%2)   t=new cat;
         else  t=new dog;
         // t=new NODE(atoi(argv[i]));
                       A.add_node(t);
   }
   A.show_all();

   //A.snap_finger(); // kill 1/2 (make size=0)

   A.show_all();

    
}