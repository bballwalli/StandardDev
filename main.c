//
//  main.c
//  sd
//
//  Created by Akeem Bacchus on 12/3/17.
//  Copyright © 2017 Akeem Bacchus. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void input(int x[]);
void process(int x[]);
void display(float mean, float standardDeviation);

int main() {
    //This function is complete. Do not change it.
    int x[101];
    
    printf("Enter an integer in the range 1 to 100: ");
    input(x);
    process(x);
    return 0;
}

void input(int x[]) {
    //Complete this function
    int data;
    scanf("%i", &data);
    x[0] = data;
    
    for(int i=1;i<=data;i++) {
        int newData;
        printf("Enter %i any integer: ", (data+1-i));
        scanf("%i", &newData);
    }
}

void process(int x[]) {
    //Complete this function
    float sum=0.0, mean=0.0, std = 0.0;
    
    int check = x[0];
    
    for(int i=1; i<=check; i++) {
        sum += x[i];
    }
    
    mean = sum/check;
    
    for(int i=1; i<=check; i++)
        std += pow(x[i] - mean, 2);
    
    std = sqrt(std/check);
    
    display(mean, std);
}
void display(float mean, float standardDeviation) {
    //This function is complete. Do not change it.
    printf("The mean is: %.3f\n", mean);
    printf("The standard deviation is: %.3f\n", standardDeviation);
}
