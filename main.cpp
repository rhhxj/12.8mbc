//
//  main.cpp
//  12.8mbc
//
//  Created by 20141105047 on 15/12/9.
//  Copyright (c) 2015年 20141105047. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    int age;
    student *next;
};
int main(int arge, const char * argv[]){
    //insert code here...
    student A,B,C,D;
    scanf("%s%d",A.name,&A.age);
    scanf("%s%d",B.name,&B.age);
    scanf("%s%d",C.name,&C.age);
    scanf("%s%d",D.name,&D.age);
    printf("%s %d\n",A.name,A.age);
    printf("%s %d",B.name,B.age);
    printf("%s %d",C.name,C.age);
    printf("%s %d",D.name,D.age);
    
    return 0;
}