#ifndef STAT_H
#define STAT_H

#include <stdio.h>

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param arr The array to print its statics
 * @param len The length of the array
 * 
 * @return 0 on success and 1 otherwise
 */
print_statistics(int arr[], int len);

/**
  * @brief Given an array of data and a length, prints the array to the screen.
  *
  * @param arr The array to print its statics
  * @param len The length of the array
  *
  * @return 0 on success and 1 otherwise
  */
print_array(int arr[], int len);

/**
  * @brief Given an array of data and a length, returns the median value
  *
  * @param arr The array to print its statics
  * @param len The length of the array
  *
  * @return the median value
  */
find_median(int arr[], int len);

/**
  * Given an array of data and a length, returns the mean
  *
  * @param arr The array to print its statics
  * @param len The length of the array
  *
  * @return the mean
  */
find_mean(int arr[], int len);

/**
  * @brief Given an array of data and a length, returns the maximum
  *
  * @param arr The array to print its statics
  * @param len The length of the array
  *
  * @return The maximum value
  */
find_maximum(int arr[], int len);

/**
  * @brief Given an array of data and a length, returns the minimum
  *
  * @param arr The array to print its statics
  * @param len The length of the array
  *
  * @return the minimum value
  */
find_minimum(int arr[], int len);

/**
  * @brief Given an array of data and a length, sorts the array from largest to smallest
  *
  * @param arr The array to print its statics
  * @param len The length of the array
  *
  * @return 0 on success and 1 otherwise
  */
sort_array()

#endif /*stat.h*/
