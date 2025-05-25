#include<stdio.h>
int main(){
    char correctans[4] = {'d','d','a','a'};
    char userAns[4];
    int score = 0;
    //Question 1
    printf("Which one is the duelist amongst all ?\n");
    printf("a)sage\nb)harbour\nc)chamber\nd)reyna\n");
    scanf(" %c",&userAns[0]);
    //question 2 
    printf("What is the latest generation of warcraft made by India ?");
    printf("\na)4th gen\nb)5th gen\nc)6th gen\nd)5.5 gen\n");
    scanf(" %c",&userAns[1]);
    //Question 3
    printf("What is used in loop in c from below ?");
    printf("\na)for\nb)char\nc)if\nd)else");
    scanf(" %c",&userAns[2]);

    //question 4 
     printf("What is the capital of India ?");
     printf("\na)New Delhi\nb)Kolkata\nc)Mumbai\nd)Chennai\n");
     scanf(" %c",&userAns[3]);

     for(int i=0;i<4;i++){
        if(userAns[i]==correctans[i]){
            score++;
        }
     }

     //result
     printf("\nYour score is %d out of 4.\n",score);
     if(score==0){
        printf("Excellent\n");
     }
     else if (score>=2){
        printf("Good job!\n");
     }
     else{
        printf("Better luck next time !");
     }
    return 0;
}