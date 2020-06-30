/*******************************************************************************
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
 * @file stats.h 
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
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief calculates the minimum value of the array 
 *              takes the array and the size as input 
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array 
 *
 *
 *
 * @return an integer, minimum value of the array 
 */

unsigned char find_minimum(unsigned char * temp, int size);

/**
 * @brief calculates the maximum value of the array 
 *              takes the array and the size as input 
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array 
 *
 *
 *
 * @return an integer, maximum value of the array 
 */

unsigned char find_maximum(unsigned char * temp, int size);

/**
 * @brief calculates the mean value of the array 
 *              takes the array and the size as input 
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array 
 *
 *
 *
 * @return an integer, mean value of the array 
 */

unsigned char find_mean(unsigned char * temp, int size);

/**
 * @brief calculates the median value of the array 
 *              takes the array and the size as input 
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array 
 *
 *
 *
 * @return an integer, median value of the array 
 */

unsigned char find_median(unsigned char * temp, int size);

/**
 * @brief prints out the array to the screen
 *              takes the array and the size as input
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array
 *
 *
 *
 * @return void
 */

void print_array(unsigned char * temp, int size);

/**
 * @brief prints out max, min, mean and median values to the screen
 *              takes the array and the size as input
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array
 * @param maximum an integer which has the maximum value of the array
 * @oaram minimum an integer which has the minimum value of the array
 * @param mean an integer which has the mean of the array
 * @param median an integer which has the median of the array
 *
 * @return void
 */

void print_statistics(unsigned char * temp, int size, unsigned char maximum, unsigned char minimum, unsigned char mean, unsigned char median);

/**
 * @brief sorts out the array
 *              takes the array and the size as input
 *
 *
 *
 * @param temp an unsigned char pointer to an n-element data array
 * @param size an unsigned integer that defines the size of the array
 *
 *
 *
 * @return void
 */

void sort_array(unsigned char * temp, int size);

#endif /* __STATS_H__ */
