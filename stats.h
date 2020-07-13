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
 * @file <stats.h> 
 * @brief <Contains function declarations for functions from stats.c>
 *
 * <These functions calculate the Maximum,minimum,mean, median, and also displays the original and descending array>
 *
 * @author <Atharva .R. Joshi>
 * @date <13th July 2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char test[SIZE],int n);
void print_array(unsigned char test[SIZE],int n);
void find_median(unsigned char test[SIZE],int n);
void sort(unsigned char test[SIZE],int n);
void find_mean(unsigned char test[SIZE],int n);
void find_maximum(unsigned char test[SIZE],int n);
void find_minimum(unsigned char test[SIZE],int n);
/**
 * @brief <Prints the statistics of the array ie.Maximum value,Minimum value,Mean value and median value.>
 *
 * <The seven functions perform various tasks as specified above and 6 of them are called in function print_statistics which is called in main>
 *
 * @param <unsigned char test[SIZE]> <The array itself>
 * @param <int n> <Consists of the length of the array>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <various values like Maximum,minimum,mean,median etc are returned>
 */


#endif /* __STATS_H__ */
