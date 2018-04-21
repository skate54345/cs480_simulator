#ifndef SIM04_FUNCTIONS_H
#define SIM04_FUNCTIONS_H

#define GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "linkedlist.h"
#include "simtimer.h"
#include "functions.h"
#include "sim02_functions.h"
#include "sim03_functions.h"


void SJFN(char *log_to, int PCBIteration, int row, int col,
            char *meta_data_matrix[100][100][100]);

void run(FILE *log_file, int ending_row, char *timeArray,
            char *meta_data_matrix[100][100][100]);


#endif   // SIM04_FUNCTIONS_H
