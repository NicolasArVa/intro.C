#include <stdio.h>

//Write your function prototype here
void ageChange (int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here 
    ageChange(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}

//Write your function here
void ageChange (int * age) {
    if (*age>20) {
        *age -=10;
    } else {
        *age *= 2;
    }
}