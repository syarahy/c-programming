#include <stdio.h>
#include<stdlib.h>
#include<iomanip>

/*
a. Display the table with appropriate labels
for the rows and columns.

b. Compute and display the total number of votes received
by each candidate and the percentage of the total votes cast.

c. If any one candidate received over 50 percent of the votes,
the program should display a message declaring that candidate the winner.

d. If no candidate received 50 percent of the votes,
the program should display a message declaring a runoff between
the two candidates receiving the highest number of votes; the two candidates
should be identified by their letter names.
*/

int main()
{
   int votes[5][4] = { 192,48,206,37,
       147,90,312,21,
       186,12,121,38,
       114,21,408,39,
       267,13,382,29 };

   char cand[4] = { 'A','B','C','D' };

   int row_totals[5];
   int col_totals[5]; //This is left for you to do
                   //see code below to see how
                   //row_totals were calculated.

   int total_votes=0; //use a for loop to calculate
                   //using either row_totals or col_totals   

   float percent[4]; //use a for loop to calculate based on
                   //total_votes and col_totals

                   //be sure to print the totals for the candidates


                   //at the end, you will need to sort the percent array
                   //bringing along the values from the cand array. That is
                   //if a swap is made in the percent array, do the same
                   //swap in the cand array.

                   //then if percent[3] is greater than 50, declare cand[3] the winner
                   //if percent[3] is not greater than 50, declare a run-off
                   //between cand[2] and cand[3]

   int row, col;

   for (row = 0; row <= 4; row++)
   {
       row_totals[row] = 0;

       for (col = 0; col <= 3; col++)
       {
           row_totals[row] += votes[row][col];
       }
   }
   //get the column totals
   for (int i = 0; i < 4; i++)
   {
       col_totals[i] = 0;
       for (int j = 0; j < 5; j++)
       {
           col_totals[i] += votes[j][i];
       }
   }
   //calculating grand total
   col_totals[4] = 0;
   double sum = 0.0;
   for (int i = 0; i < 5; i++)
   {
       sum += row_totals[i];
   }
   col_totals[4] = sum;
  
   printf(" Candidate Candidate Candidate Candidate Total\n");
   printf(" Precinct A B C D Votes\n");
   for (row = 0; row <= 4; row++)
   {
       printf("%6d", row + 1);
       for (col = 0; col <= 3; col++)
       {
           printf("%12d", votes[row][col]);
       }
       printf("%11d\n", row_totals[row]);
   }
    int max; 
    max= 0; 

   printf("Total ");
   for (int i = 0; i < 5; i++)
   {
       printf("%12d", col_totals[i]);
}

   //Compute percentage

   int candiA = col_totals[0];   
   int candiB = col_totals[1];   
   int candiC = col_totals[2];   
   int candiD = col_totals[3];
   max=candiA;
   if (candiB >= max)
   {
       max=candiB;
	      }
   else if (candiC >= max)
   {
      max=candiC;
	   }
   else if (candiD >= max)
   {
        max=candiD;
   } 
   else {

	}
	
			printf("\nHighest total vote is : %d", max);

       printf("\nThe total of number vote for candidate A is %d", candiA); 


}
