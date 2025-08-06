#include <stdio.h>
#include <string.h>
#include "headers.h"

// Define the variables that were previously in headers.h
const char* slots[5] = {
    "2pm to 2:30pm",
    "2:30pm to 3pm",
    "3pm to 3:30pm",
    "4pm to 4:30pm",
    "4:30pm to 5pm"
};

int reserved[5] = {0, 0, 0, 0, 0};
patient patients[maxPatient];
int patientCounter = 0;

// Rest of your function implementations remain the same...