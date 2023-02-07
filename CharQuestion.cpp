#include <stdlib.h>
#include <stdio.h>
#define MAX 40
void lengthh(char A[MAX], int *n){
	int i;
	for(i=0;A[i]!='\0';i++);
	*n=i;
}
void sameLetter(char A[MAX],char B[MAX],int *n){
	int i,j;
	int word1,word2;
	*n=0;
	lengthh(A,&word1);
	lengthh(B,&word2);
	for(i=0;i<word1;i++){
		for(j=0;j<word2;j++){
			if(A[i]==B[j]){
				*n=*n+1;
			}
			
		}
	}
}
int main(){
	char sentence[MAX],tab[MAX];
	int i=0;
	int a,r;
	printf("Please enter a sentence or a word: ");
	do
	{
		scanf("%c",&sentence[i]);
		i++;
	}
	while(sentence[i-1]!='\n');
	sentence[i-1]='\0';
	lengthh(sentence,&a);
	printf("%d is the length of the array.\n",a);
	printf("Please enter two words: ");
	scanf("%s %s",&sentence,&tab);
	sameLetter(sentence,tab,&r);
	printf("%s and %s have common letters as many as %d\n",sentence,tab,r);
	return 0;
}
