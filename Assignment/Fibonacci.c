#include<stdio.h>
int main(){
	int a, b, n, i, next;

	printf("Enter a number: ");
	scanf("%d",&n);
	a = 0;
	b = 1;
	i = 1;

	while(i<=n){
		printf("%d\n", a);
		next = a + b;
		a = b;
		b = next;
		i++;
	}
	return 0;
}