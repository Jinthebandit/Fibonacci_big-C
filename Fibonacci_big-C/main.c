/* 
 * File:   main.c
 * Author: Lukas Fischer
 * GitHub: https://github.com/Jinthebandit/Fibonacci_big-C.git
 * 
 * REQUIREMENTS HW-11:
 * 
 * 
 * DEVELOPMENT CYCLE:
 * Gesucht: Externe Textdatei in stdout wiedergeben.
 * Gegeben: Externe Textdateien.
 * 
 * 
 * Created on 01. December 2019
 */

// import libraries
#include <stdio.h>
#include <stdlib.h>

// definitions
#define EONCHAR 0
#define EONINT -1
#define DIGITYPE char
#define EON EONCHAR
#define MAXDIGITS 10000

// initialize functions
void print_huge_number( const DIGITYPE *ptr, const int n);
void add_huge_numbers( const DIGITYPE *ptr1, const int n1,
        const DIGITYPE *ptr2, const int n2,
        DIGITYPE *ptr, const int n);

/*
 * main
 */
int main(int argc, char** argv) {
    
    print_huge_number("1",1);
    add_huge_numbers("1",1,"1",1,"1",1);
    
    return (EXIT_SUCCESS);
}

/*
 * print huge number
 */
void print_huge_number( const DIGITYPE *ptr, const int n){
    
    printf("huuuuuuge number\n");
}

/*
 * print huge number
 */
void add_huge_numbers( const DIGITYPE *ptr1, const int n1,
        const DIGITYPE *ptr2, const int n2,
        int *DIGITYPE *ptr, const int n) {
    
    printf("add");
    
}
