//Colin Hosking
//Work 03
//Systems pd05
//2018-09-20

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //seeds RNG with current EPOCH
    
    int ray[10];        //initialize array to store 10 ints
    int i;              //initialize counter
    
    for (i = 0; i < 10; i++){       //set each element to random int
        ray[i] = rand();
    }
    
    ray[9] = 0;                     //set 10th int to 0
    
    for (i = 0; i < 10; i++){
        printf("ray[%d]: %d\n", i, ray[i]); 
    }
    
    int ray2[10];       //initialize new array to store 10 ints
    int *ray1pointer = &(ray[9]);   //pointer points to last value in ray
    int *ray2pointer = ray2;        //pointer points to first value in ray2
    
    for (i = 0; i < 10; i++){       
        *ray2pointer = *ray1pointer;         //sets value in ray2 to value in ray 
        ray1pointer -= 1;                    //ray1pointer points to previous value in ray
        ray2pointer+=1;                     //ray2pointer points to next value in ray2
    }
    
    for (i = 0; i < 10; i++){
        printf("ray2[%d]: %d\n", i, ray2[i]); 
    }
}