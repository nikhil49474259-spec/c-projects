#include <stdio.h>
#include <stdbool.h>


int main(){


// This is my first program!:)
/* This is my first task */


int age = 16;
int year = 2026;
int quantity = 6;

printf("I'm %d years old\n", age);
printf("The year %d is very weird\n", year);
printf("I bought %d cakes for my birthday\n", quantity);

float gpa = 9.7;
float price = 21.198;
float temperature = 100.0;

printf("My 10th class gpa is %f\n", gpa);
printf("The price of the cup is ₹ %f\n", price);
printf("The temperature at whuch water boils is %f °C \n", temperature);

double pi = 3.1415926;
double e = 2.718281828;

printf("The value of e is %.9lf\n", e);
printf("The value of pi is %.9lf\n", pi);



bool is_online = 1;
bool is_student = 0;
if (is_online){
	printf("You are online\n");
}

else{
	printf("You are offline\n");
}


if (is_student){
	printf("You are a student\n");
}

else{
	printf("You are not a student\n");
}


char symbol = '#';
char currency = '₹';
printf("The most common symbol is %c\n", symbol);
printf("The currency used in india is %c\n", currency);

return 0;
}



