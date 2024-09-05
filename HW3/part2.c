/*Student Assignment Submission Form
I declare that the attached assignment is wholly my own work in accordance with UCF Academic Policy. No part of this assignment has been copied manually or electronically from any other source (including web sites) or distributed to other students. My name is: Awad Yousef, Date: 2/21/2024 */


#include <stdio.h>

// declaring the skeletons for the functions I used for the program
int webchooser();
int ipchooser();
int emailchooser();
int internetchooser();
double printWeb(int webhost, int iphost);
double printEmail(int emailhost);
double printInternet(int internethost);
double bill(char webchoice, int webhost, int iphost, char emailchoice, int emailhost, char internetchoice, int internethost);


int main(void) {
  // variables for web hosting section
  char webchoice;
  int webhost;
  int iphost;
  // variables for the email marketing section
  char emailchoice;
  int emailhost;
  // variables for the internet marketing section
  char internetchoice;
  int internethost;

  // printing the starting message and asking for the first selection.
  printf("Welcome to AMCD Hosting Incorporated\nWould you like to subscribe to a Web Hosting Service? (Y or N): ");
  scanf("%c", &webchoice);
  switch (webchoice) {
    case 'Y':
      webhost = webchooser();
      iphost = ipchooser();
      break;
    default: // if no, just continue on as normal.
      webhost = 0;
      iphost = 0;
  }

  // asking for the second selection.
  printf("Would you like to subscribe to an Email Marketing service? (Y or N): ");
  scanf(" %c", &emailchoice);
  switch (emailchoice) {
    case 'Y':
      emailhost = emailchooser();
      break;
    default:
      emailhost = 0;
  }

  // asking for the third selection.
  printf("Would you like to subscribe to an Internet Marketing service? (Y or N): ");
  scanf(" %c", &internetchoice);
  switch (internetchoice) {
    case 'Y':
      internethost = internetchooser();
      break;
    default:
      internethost = 0;
  }

  // printing the final bill.
  bill(webchoice, webhost, iphost, emailchoice, emailhost, internetchoice, internethost);

}

// the functions below were used to clean up the main function (and not have nested switch statements).
int webchooser() {
  int tempvar;
  printf("Choose Webhost Package Silver (1), Gold (2), or Ultimate (3): ");
  scanf(" %d", &tempvar);
  return tempvar;
}

int ipchooser() {
  int tempvar;
  printf("Choose IP Type: Shared (1) or Dedicated (2): ");
  scanf(" %d", &tempvar);
  return tempvar;
}

int emailchooser() {
  int tempvar;
  printf("Choose Email Marketing service: Economy (1) or Deluxe (2) or Premium (3): ");
  scanf(" %d", &tempvar);
  return tempvar;
}

int internetchooser() {
  int tempvar;
  printf("Choose Internet Marketing service: Basic (1) or Supreme (2): ");
  scanf(" %d", &tempvar);
  return tempvar;
}

// prints the final bill that the user gets.
double bill(char webchoice, int webhost, int iphost, char emailchoice, int emailhost, char internetchoice, int internethost) {
   // printing the bill
  printf("------------------------------------------------------------------------------\n");
  printf("AMCD HOSTING INC Bill Details\n");
  printf("------------------------------------------------------------------------------\n");
  printf("Service                      Package                              Cost     \n");
  // printing out the webhost section.
  switch (webchoice) {
    case 'Y':
      printWeb(webhost, iphost);
      break;
    default:
      break;
    }
  // printing out the email section
  switch (emailchoice) {
    case 'Y':
      printEmail(emailhost);
      break;
    default:
      break;
  }
  // printing out the internet section
  switch (internetchoice) {
    case 'Y':
      printInternet(internethost);
      break;
    default:
      break;
  }
  printf("------------------------------------------------------------------------------\n");
}

// individual sections of the bill, with it being first the Web Service, then the Email, then the Internet.
double printWeb(int webhost, int iphost) {
  // setting the packagecost and ipcost variables
  double packagecost, ipcost;
  switch (webhost) {
    case 1:
      packagecost = 39.01;
      break;
    case 2:
      packagecost = 59.99;
      break;
    case 3:
      packagecost = 79.50;
      break;
    default:
      break;
  }

  printf("Web Hosting                  %1d                                    $%8.2lf\n", webhost, packagecost);
  switch (iphost) {
    case 1:
      ipcost = 4.99;
      printf("    IP Shared                %1d                                    $%8.2lf\n", iphost, ipcost);
      break;
    case 2:
      ipcost = 9.99;
      printf("    IP Dedicated             %1d                                    $%8.2lf\n", iphost, ipcost);
      break;
    default:
      printf("    IP N/a                   N/a                                  $%8.2lf\n", 0.00);
      break;
  }

  return 0;
}

double printEmail(int emailhost) {
  // setting up the email prices
  double emailcost;
  switch (emailhost) {
    case 1:
      emailcost = 21.99;
      break;
    case 2:
      emailcost = 50.00;
      break;
    case 3:
      emailcost = 65.75;
      break;
    default:
      break;
  }
  printf("Email Marketing              %1d                                    $%8.2lf\n", emailhost, emailcost);

  return 0;
}

double printInternet(int internethost) {
  // setting up the email prices
  double internetcost;
  switch (internethost) {
    case 1:
      internetcost = 77.77;
      break;
    case 2:
      internetcost = 110.99;
      break;
    default:
      break;
  }
  printf("Internet Marketing           %1d                                    $%8.2lf\n", internethost, internetcost);

  return 0;
}
