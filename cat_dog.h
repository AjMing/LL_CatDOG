//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
#ifndef cat_dog_h
#define cat_dog_h

class cat:public NODE{
    int size;
public:
   
    void show_node(){
        cout<<"Meaw  "<<size<<" ";
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



