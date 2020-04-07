Amount remaining after shopping
Sherley goes for a shopping to a mall ‘M1’ . She uses credit card of bank ‘ABC’ for her purchases. Account details of each customer of ‘ABC’ 
contain Account holder name, Account number and Balance. Details of customers of mall ‘M1’ includes customer name and list of items purchased and 
cost of the items. Given the details of ‘n’ customers of bank ‘ABC’ and the purchase details of ‘m’ customers to mall ‘M1’, design an algorithm and write a
 C program to print the name of items purchased by Sherley and the balance amount in the account of Sherley in the bank ‘ABC’.

For example, if details (Name, Account number, Balance) of six customers of bank are given as follows:

Raju 12356 1000.00

Sam 12789 980.00

Ram 13457 975.50

Sherley 16789 1500.00

Sheela 17890 1345.50

Kamala 12378 2567.75

Details (Name, number of items purchased, item name1, cost1, item name2, cost2,...) of three customers of mall m1 are given as follows:

Ram 2 Bread 50.00 Jam 25.00

Sherley 3 Milk 20.00 Bread 50.00 Butter 31.50

Mukesh 4 Chocolate 15.00 Chips 12.50 Rice 29.00 Dall 31.25

Assume that the customer of mall has purchased only a maximum of ten items

 

Input Format

First line contains the number of customers of ABC bane, n

Next ‘n’ lines contain the details of customers of bank such as Account holder name, Account number and Balance in order and separated by space

Next line contains the number of customers to mall M1, m

Next ‘m’ lines contains the details of customers to mall such as name, number of items purchased ‘r’, 2*r detail such as item name and cost. Each detail is 
separated by a space

Output Format

Print name of the items purchased by Sherley, one item name in a line and balance amount in account of Sherley in the bank 

#include<stdio.h>
#include<string.h>

struct bank_details{
    char acc_name[10];
    int acc_no;
    float balance;
};

struct mall_details{
    char name[10];
    int no_of_items;
};

struct item{
    char item_name[10];
    float item_cost;
};

int main(){
    int n,m;
    float bill_in_mall=0;
    scanf("%d",&n);
    struct bank_details b1[n];
    for(int i=0;i<n;i++){
        scanf("%s",b1[i].acc_name);
        scanf("%d",&b1[i].acc_no);
        scanf("%f",&b1[i].balance);
    }

    scanf("%d",&m);
    struct mall_details m1[m];
    struct item it[m][10];
    for(int i=0;i<m;i++){
        scanf("%s",m1[i].name);
        scanf("%d",&m1[i].no_of_items);
        for(int j=0;j<m1[i].no_of_items;j++){
            scanf("%s",it[i][j].item_name);
            scanf("%f",&it[i][j].item_cost);
        }
    }
    for(int i=0;i<m;i++){
        if(strcmp(m1[i].name,"Sherley")==0){
            for(int j=0;j<m1[i].no_of_items;j++){
                if(strcmp(it[i][j].item_name,"Milk")==0)
                printf("%s ",it[i][j].item_name);
                else{
                    printf("%s",it[i][j].item_name);
                }
                printf("\n");
                bill_in_mall=bill_in_mall+it[i][j].item_cost;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(strcmp(b1[i].acc_name,"Sherley")==0){
            printf("%.2f",b1[i].balance-bill_in_mall);
        }
    }
    return 0;
}


Algorithm:
1. Form a structure of bank details.
struct bank_details{
    char acc_name[10];
    int acc_no;
    float balance;
};

Structure of mall_details 
struct mall_details{
    char name[10];
    int no_of_items;
};

structure of items
struct item{
    char item_name[10];
    float item_cost;
}; 

2.Take input of no of bank customers. and make array as struct bank_details[n]
3. Take input details of cutomer
4.Do this same for mall_details.
5.Now itterating through the mall_customers details check details of Sherly.
  if(ban_details-> cutomer_name == "Sherly") print item_names.
6.Side-by-side calculate total cost of items.
7. Then Itterating through the bank details check bank_balance of Sherly.
8. Print left_bank_balance of Sherly by subtracting cost of items from bank balance of Sherly.




