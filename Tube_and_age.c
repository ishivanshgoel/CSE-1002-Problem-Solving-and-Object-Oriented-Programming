
A game is conducted with ‘n’ players. Given the name, age and size of tube with each player and a player name ‘p’,
 write an algorithm and the C program to print name of all the players who can be partner of the player ‘p’. A player ‘q’ can 
be partner of player ‘p’ if the age of ‘q’ is less than player ‘p’ and tube size of player ‘q’ is greater than tube size of player ‘p’.

 

For example, given details of five salespersons as follows:

Name1, 34, 15

Name2, 23, 12

Name3, 45, 9

Name4, 19, 34

Name5, 32, 14

And player ‘p’ name as Name1. Name of players who can be partner of player ‘p’ are Name2, Name5.

 

Input Format

First line contains the number, n

Next n lines contain details of ‘n’ players such as name, age and size in order and separated by space

Next line contains the name of the player, p

 

Output Format

Print all the name of players with age less than age of player p and tube size less than tube size of player p 

#include<stdio.h>
#include<string.h>
struct details{
    char name[10];
    int age;
    int tube;
};
int main(){
    int n,i;
    scanf("%d",&n);
    struct  details q[n];
    struct details p;
    for(int i=0;i<n;i++){
        scanf("%s",q[i].name);
        scanf("%d",&q[i].age);
        scanf("%d",&q[i].tube);
    }
    scanf("%s",p.name);
    for(i=0;i<n;i++){
        if(!strcmp(q[i].name, p.name))
        {
            p.age=q[i].age;
            strcpy(p.name, q[i].name);
            p.tube=q[i].tube;
            break;
        }
    }

    for(i=0;i<n;i++){
        if(q[i].age < p.age && q[i].tube < p.tube){
            printf("%s\n",q[i].name);
        }
    }
    return 0;
}
