/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief program used to print out the statistics of a list of given data such as : 1.Maximum
 *										                                             2.Minimum
 *                                                                                   3.Mean
 *                                                                                   4.Median
 *
 * this program is used to print out the statistic of given data in the file given such as
 * maximum number, minimum number, the mean of given numbers and their median
 *
 * @author Mostafa Mohamed Anwar Ahmed Badr
 * @date 30/6/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
unsigned char maximum;
unsigned char minimum;
unsigned char mean;
unsigned char median;

/* Statistics and Printing Functions Go Here */
printf("The given Array is\n");

/*prints "the given array is"*/
print_array(test,SIZE);

/* using the functions defined to get the required statistics about the array*/
maximum = find_maximum(test,SIZE);
minimum = find_minimum(test,SIZE);
mean    = find_mean(test,SIZE);
median  = find_median(test,SIZE);

/*printing the calculated statistics*/
print_statistics(test,SIZE,maximum,minimum,mean,median);

/*sorting the array using sort function*/
sort_array(test,SIZE);

printf("The array after sorting\n");
print_array(test,SIZE);
}

/* Add other Implementation File Code Here */

unsigned char find_mean(unsigned char * temp, int size){
	int i;
	int sum=0;
	int avg=0;
	if(temp == NULL)
		return 0;
	if(size <= 0)
		size = 1;
	for (i=0;i<size;i++){
		sum+=temp[i];
	}
	avg= (sum/size);
	return avg;
}

unsigned char find_median(unsigned char * temp, int size){
	float median = 0; 
	sort_array(temp,size);
	if(size%2 == 0)
		median = (temp[(size-1)/2]+ temp[(size/2)])/2.0;
	else
		median = temp[size/2];
	return median;
}

unsigned char find_maximum(unsigned char * temp, int size){
	int i;
	int max;
	if (temp == NULL)
		return 0;
	max = temp[0];

	for(i=0;i<size;i++){
		if(max<temp[i])
			max=temp[i];
	}
	return max;
}

unsigned char find_minimum(unsigned char * temp, int size){
        int i;
        int min;
        if (temp == NULL)
                return 0;
        min = temp[0];

        for(i=0;i<size;i++){
                if(min>temp[i])
                        min=temp[i];
        }
        return min;
}

void print_array(unsigned char * temp,int size){
	int i;
	if(temp == NULL)
		return 0;
	for(i=0;i<size;i++)
		printf("%d\t",temp[i]);
	printf("\n");
}

void sort_array(unsigned char * temp,int size){
	int i,j,swap;

	for(i=0;i<size;i++){
		swap = temp[i];
		for (j= i-1;j>=0 && swap > temp[j];j--){
			temp[j+1]=temp[j];
		}
		temp[j+1]=swap;
	}
}

void print_statistics(unsigned char * temp, int size, unsigned char maximum, unsigned char minimum, unsigned char mean, unsigned char median){
	printf("\nThe statistics of the array are:\n");
	printf("1. Maximum is %d\n",maximum);
	printf("2. Minimum is %d\n",minimum);
	printf("3. Mean is %d\n",mean);
	printf("4. Median is %d\n",median);
}
		
