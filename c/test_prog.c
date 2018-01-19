#include <stdio.h>
#include <stdlib.h>

/* remember how to declare functions at top */
int function_1(int thing);
int function_2(int thing_x);

// test function chaining
int function_1(int thing){
	return thing * function_2(2);
}
// test function chaining
int function_2(int thing_x){
	return thing_x * 2;
}
// remember some stuff about arrays
void mess_with_array(int *arr_ptr){
	arr_ptr[0] = 2;
}


int main (int argc, char** argv) {

	printf ("been awhile. %d\n",function_1(2));
	int arr[] = {1,1};
	for(int i=0;i < 2;i++){
		printf("%d\n",arr[i]);
	}
	mess_with_array(arr);
	for(int i=0;i < 2;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}