
Write a recursive ‘C’ program to print the reverse of the string.

 

Note:

Function declaration for reversing string is given as precode, use that for defining the function and function call

 

Input Format

First line contains the string, S

 

Output Format

Print reverse of string, S 
#include<stdio.h>
void reverse(char word[30], int l);
int main(){
    char name[30],i,size=0;
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++) size++;
    reverse(name,size-1);
}
void reverse(char word[30], int l){
    if(l>=0){
        printf("%c",word[l]);
        reverse(word,l-1);
    }
    else{
        return;
    }
}
