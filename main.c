#include "/timing.h"
//#define MIN 100
//#define MAX 1000
// Find largest plaindrome of product of two x-digit numbers
int isPalindrome(int l,int *array){
	for (int i=0; i<=(l-i); i++) {
		if (array[i]!= array[l-i])
			return 0;
	}
	return 1;
}

int IntegertoString(int number, int *array){
	int i=1;
	int c,d;
	int a =-1;
	int b = 0;
	while (i>=1){
		a++;
		i = number / pow(10,a);
	}
	a=a-1;
	d=a;
	while (b<=d){
		c=(number/(pow(10,(a))));
		number= number - c*pow(10,a);
		array[b]=c;
		b++;
		a--;
	}
	return (d);
}

int main (void) {
	int choice;
	while (1){
	printf("Largest palindrome of two numbers of how many digits? ");
	scanf("%i",&choice);
		if (choice==0)
			return 0;
	int MIN = pow(10,choice-1);
	int MAX = pow(10,choice);
		int array[choice*choice];
		int i,c,integer_string, a,b;
	long palindrome,p;
	    t0=starttime();
for (i=MIN; i<MAX; i++)
		for (c=MIN; c<MAX; c++){
			integer_string = IntegertoString((i*c),array);
			p = isPalindrome(integer_string,array);
			if (p==1 && (i*c)> palindrome){
				//printf("%i, %i\n%i\n",i,c,(i*c));
				palindrome = (i*c);
				a = i;
				b= c;
			}
		}
	printf("Largest Palindrome: %ld\nof the product of %i and %i\n",palindrome, a, b);
	t1=endtime();
	displaytime();
	}
}
