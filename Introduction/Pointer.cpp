#include <stdio.h>

void update(int *a,int *b) {
    int sum=*a+ *b; // *a --> the value of a
   int absoluteDifferenece= (*a > *b) ? (*a - *b) :  (*b - *a) ;
   *a=sum; 
   *b=absoluteDifferenece;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b; //assign the memory adress a and b to pointers pa and pb
                            // &a --> the address of a
    
    scanf("%d\n%d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//TO access the memory address of val ==> &val
//Assign the memory adress of val to a pointer ==> int *p=&val
//To access the value stored in the memory address ==> *p
//To access the memory address ==> p