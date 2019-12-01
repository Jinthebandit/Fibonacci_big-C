/* 
 * File:   main.c
 * Author: Lukas Fischer
 * GitHub: https://github.com/Jinthebandit/Fibonacci_big-C.git
 * 
 * REQUIREMENTS HW-11:
 * 
 * 
 * DEVELOPMENT CYCLE:
 * Gesucht: Fibonacci Zahlen mit 100, 1000 und 10000 Stellen. * 
 * 
 * Created on 01. December 2019
 */

// import libraries
#include <stdio.h>
#include <stdlib.h>

// definitions
#define DIGITYPE char
#define EONCHAR 0
#define EONINT -1
#define EON EONCHAR
#define MAXDIGITS 100

// initialize functions
void print_huge_number( const DIGITYPE *ptr, const int n);
void add_huge_numbers( const DIGITYPE *ptr1, const int n1,
        const DIGITYPE *ptr2, const int n2,
        DIGITYPE *ptr, const int n);

/*
 * main
 */
int main(int argc, char** argv) {
    
    DIGITYPE *ptr[MAXDIGITS];
    DIGITYPE *ptr1[MAXDIGITS];
    DIGITYPE *ptr2[MAXDIGITS];
       
    print_huge_number("1",1);
    add_huge_numbers("1",1,"2",1,"0",10);
    print_huge_number("1",1);
    
    return (EXIT_SUCCESS);
}

/*
 * print huge number
 * return array as number.
 */
void print_huge_number( const DIGITYPE *ptr, const int n){
        
    printf("Pointer als Zahl  --> %ld\n", strtol(ptr,NULL,0));
}

/*
 * add huge numbers
 * addition of 3 arrays as arguments
 */
void add_huge_numbers( const DIGITYPE *ptr1, const int n1,
        const DIGITYPE *ptr2, const int n2,
        DIGITYPE *ptr, const int n) {
    
    printf("test\n");
}
