#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    srand(time(0));
	int a=1;
	while(a==1){
    	printf("THE GAME : Rock Paper Scissors\n");
    	printf("0 = Rock\n1 = Paper\n2 = Scissors\n");

    	printf("Enter your choice: ");
    	scanf("%d", &player);

    	if (player < 0 || player > 2) {
        	printf("Invalid choice. Choose 0, 1, or 2.\n");
        	goto label1;
    	}

    	computer = rand() % 3;

    	printf("You chose: %d\n", player);
    	printf("Computer chose: %d\n", computer);

  
    	if (player == computer) {
        	printf("It's a Draw!\n");
    	} 
		else if ((player == 0 && computer == 2) || (player == 1 && computer == 0) || (player == 2 && computer == 1)) {
        	printf("ongratulations you won!\n");
    	} 
		else {
        printf("You lost computer wins!\n");
    	}
    	label1:
    		printf("Do you want to play again (y/n) : ");
    		char x;
    		scanf(" %c",&x);
    		if(x=='y'){
    			a=1;
			}
			else{
				a=0;
				printf("Thankyou for playing the game!!");
			}
	}
return 0;
}