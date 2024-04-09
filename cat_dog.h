//
//  cat_dog.h
//  LLC1
//

#ifndef cat_dog_h
#define cat_dog_h

class cat:public NODE{
    int size;
public:
   
    void show_node(){
       /* Do some thing with cats*/
        NODE::show_node();
    }

};

class dog:public NODE{
    float height;
public:
    
    void show_node(){
        cout<<"Hong Hong  "<<height<<" ";
        NODE::show_node();
    }

};



