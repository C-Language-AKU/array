#include <stdio.h>

int main(){

int i,j,c;
int n= 5;
int T[n];

	for(i=0; i<n; i++){ //Entering the values of the array.
		printf("Enter the value of T[%d]: ", i); //Asks the user for the value.
		scanf("%d", &T[i]); //Takes the user's answers.
}

//To print the values from the smallest to the biggest we need to use a loop inside of another

	for(int i=0; i<n; i++){ //This for loop is used to switch between the array values.
		for(j=i+1; j<n;j++){ //This for loop is used to check if the value of T[i] > or < than T[j] and stores them again.
			if(T[i] >T[j]){ //if condition to store the values from the smallest to the biggest.
				c = T[i];
				T[i] = T[j];
				T[j] = c;
			}
		}

	}

	printf("\n------------------------------------------------------------------------------\n\nThe values sorted from smallest to biggest are:\n\n");
	for(i=0;i<n;i++){ //This for loop prints out the final result of this program.
	printf("T[%d] = %d\n", i, T[i]);
}

return(0);
}
