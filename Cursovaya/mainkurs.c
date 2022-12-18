#include <conio.h>
#include <stdio.h>
#include <string.h>

struct trains
{
	int number_of_trains;
	char final_destination;
	int day_of_departure;
	int month_of_departure;
    int year_of_departure;
	int hour_of_departure;
	int minute_of_departure;
	int day_of_arrival;
	int month_of_arrival;
	int year_of_arrival;
	int hour_of_arrival;
	int minute_of_arrival;
	float coast_of_ticket;
	int number_of_remaining_tickets;
	int number_of_sold_tickets;	
};
struct authorization
{
	char login[10];
	char password[10];
	int role;
 };
 
 
 int main (void){
 	int opt;  //option
 	printf ("---------------------AUTHORIZATION---------------------\n");
 	printf ("MENU:\n");
 	printf (" You can press 1 to register\n You can press 2 to log in\n\n");
 	scanf ("%d", &opt);
 	getchar ();  // catching newline
 	 if (opt == 1) {
 	 	system ("CLS"); // очистить экран
 	 	registration ();
	 }
	   else if (opt == 2) {
	   	 system ("CLS");
	   	 login ();
	   }
 }
 
 void registration (void) {
 	char
 }