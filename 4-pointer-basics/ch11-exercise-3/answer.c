#include <stdlib.h>
#include <stdio.h>

// The following function supposedly computes the sum and average of the numbers in the
// array a, which has length n. avg and sum point to variables that the function should 
// modify. Unfortunately, the function contains several errors; find and correct them.
/*
void avg_sum(double a[], int n, double *avg, double *sum)
{
  int i;
  sum = 0.0;
  for (i = 0; i < n; i++)
    sum += a[i];
  avg = sum / n;
}
*/
void fixed_avg_sum(double a[], int n, double *avg, double *sum)
{
  int i;
  *sum = 0.0; // needed to be *sum to modify the value it points to     
  for (i = 0; i < n; i++)
    *sum += a[i]; // needs to be *sum to modify the value as sum without the * is a pointer to a value
  *avg = *sum / n; // both avg and sum needed a * to get the value the pointer points to rather 
}

void main(){
    // testing fixed_avg_sum out 
    double avg, sum;
    double a[] = {2.0, 1.0, 5.0};
    int n = 3;
    fixed_avg_sum(a, n, &avg, &sum); // since avg and sum aren't pointers we need the & to make them pointers
    printf("Sum: %lf\nAverage: %lf\n", sum, avg); // Sum: 8 Average 2.666667
}