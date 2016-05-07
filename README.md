# ZADANIE3.1
Project 3 part 1 
Subject: Matematic Logic in IT
Student: Kevin Pietrzyk
AGH WIEiT IT

The problem of our project is to make a program that has a complicated if-statment built out of 6 or more conditions that have to be met.

This program is written in C.

What this program does is gets 6 arguments (that should be intergers) and says if they represent a certain string(asending,desending,not-asending,not-desending,constant).

file: zad3.1.c

To compile: gcc -Wall -O2 -ansi -pedantic -std=c99 -o zad3.1 zad3.1.c -lm

for example ./zad3.1 -48 -23 0 12 33

Other then that there is another program that is the negation of our first program so teoretically it will tell us if out of the six integers we provide don't make a string.

file nzad3.1.c

To compile: gcc -Wall -O2 -ansi -pedantic -std=c99 -o nzad3.1 nzad3.1.c -lm

Apart from those 2 files we have a file that runs the program for certain arguments and writes out the answers that don't match our hipotetical answers.



