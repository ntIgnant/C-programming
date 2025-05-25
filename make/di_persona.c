// This file contains the implementation of the headerfile defined functions
#include <stdio.h>

void SayName(void* p){ // generit progaming way (will wowk with any pointer type)
                       // Otherwise it would be (Person* n)
    printf("Hello %s!\n", p->name);
}

void SayAll(void* p){
    printf("%s is %d years old and is %hm tall\n", p->name, p->age, p->height);
}
