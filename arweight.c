#include<stdio.h>
#include<stdlib.h>
int main()
{
	double avg_weight, total = 0;
	int i,num=0;
	int weight[1000];

	FILE *fp;

	fp = fopen("elephant.txt", "r"); //opening the file in read mode
	//put the whole path in place of elephant.txt

	if (fp != NULL)
	{
		for (i = 0; i < 1000; i++) // Reading the weights and storing gin a file
		{
			fscanf(fp, "%d", &num);
			weight[i] = num;
		}

		fclose(fp);

		for (i = 0; i < 1000; i++)
		{
			total += weight[i]; //Finding sum of the weights
		}

		avg_weight = total / 1000; //Calculating average of weights

		printf("Average weight= %.2f", avg_weight);
	}

	else
	{
		printf("\n file is not found");
	}
	return 0;
}
