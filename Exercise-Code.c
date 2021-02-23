#include <stdio.h>
int n=5;

/*max function*/
int max(int T[]){ //Take another look at this part, giving wrong answer.
	int i;
	int y = T[0];
	for(i=0; i<n; i++){ //This for loop is used to switch between all the numbers of the array.
		if(y < T[i]){ //This condition checks if the value of y is < than the value of T[..].
			y = T[i]; //If the condition is satisfied, y becomes = to the value of T[] that is bigger.
		}
	}

return(y);
}

/*sum function*/
int sum(int T[]){ //This function adds all the values of an array.
	int x = 0;
	for(int i=0; i<n; i++){ //This for loop is used to switch between all the values of the array.

		x = x +T[i]; //Calculate the sum of the values for the array.
	}
return(x);
}

/*main function*/
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

	int y = max(T); //Calling the max function.

	printf("The biggest number in this array is: %d\n",y); //Printing the largest value of the array T.

	int s = sum(T); //Calling the sum function.

	printf("The sum of this array is: %d\n",s); //Printing the sum for the array T[].

return(0);
}
