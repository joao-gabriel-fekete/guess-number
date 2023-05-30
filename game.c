#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/* code */
	//Comment
	 printf("***********\n");
	 printf("*Hi there!*\n");
	 printf("***********\n");

	 int seconds = time(0);
	 srand(seconds);

	 int randomNumber = rand();

	 int secretNumber = randomNumber % 100;
	 int ganhou = 0;
	 int tentativa = 1;

	 double pontos = 1000;
	 int attemptNumber= 5


	 for (int i = 0; i < count; ++i)
	 {
		 int guess;


		 printf("Qual o seu chute?\n");
		 printf("Tentativa %d\n", tentativa);
		 scanf("%d", &guess);

		 // rules
		 if (guess < 0)
		 {
			printf("Não pode número negativo\n");
			continue;
		 }

		 //Condition

		 int right = (guess == secretNumber);
         int greater = (guess > secretNumber);

		 if(right){
		 	printf("Você acertou!\n");

		 	//stop the loop
		 	ganhou = 1;

		 } else if (greater)
	 	{
 	    	printf("Seu chute foi maior que o número secreto\n");


	 	} else {
	 		printf("Seu chute foi menor que o número secreto\n");
	 	} 


		 double pontosperdidos = abs(guess - secretNumber)/(double)2;
		 pontos = pontos - pontosperdidos;
		 tentativa++;


	 }

	 printf("Acabou!");
	 printf("Total de pontos: %.2f", pontos);
	 

}

