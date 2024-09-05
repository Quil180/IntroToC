/*Student Assignment Submission Form
I declare that the attached assignment is wholly my own work in accordance with
UCF Academic Policy. No part of this assignment has been copied manually or
electronically from any other source (including web sites) or distributed to
other students. My name is: Awad Yousef, Date: 2/21/2024 */

#include <stdio.h>

// declaring the skeletons for the functions I used for the program to be
// modular
int webchooser();
int ipchooser();
int emailchooser();
int internetchooser();
double printWeb(int webhost, int iphost);
double printEmail(int emailhost);
double printInternet(int internethost);
int totalbill(int servicecounter, double total);
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
  // adding the variables for part3 (calculating total)
  int servicecounter = 0;
  double total = 0;

  // printing the starting message and asking for the first selection.
  printf("Welcome to AMCD Hosting Incorporated\nWould you like to subscribe to "
         "a Web Hosting Service? (Y or N): ");
  scanf("%c", &webchoice);
  switch (webchoice) {
  case 'Y':
    webhost = webchooser();
    iphost = ipchooser();
    servicecounter++;
    break;
  default: // if no, just continue on as normal.
    webhost = 0;
    iphost = 0;
  }

  // asking for the second selection.
  printf(
      "Would you like to subscribe to an Email Marketing service? (Y or N): ");
  scanf(" %c", &emailchoice);
  switch (emailchoice) {
  case 'Y':
    emailhost = emailchooser();
    servicecounter++;
    break;
  default:
    emailhost = 0;
  }

  // asking for the third selection.
  printf("Would you like to subscribe to an Internet Marketing service? (Y or "
         "N): ");
  scanf(" %c", &internetchoice);
  switch (internetchoice) {
  case 'Y':
    internethost = internetchooser();
    servicecounter++;
    break;
  default:
    internethost = 0;
  }

  // printing the final bill.
  total = bill(webchoice, webhost, iphost, emailchoice, emailhost,
               internetchoice, internethost);
  totalbill(servicecounter, total);
  printf("---------------------------------------------------------------------"
         "----------\n");
}

// the functions below were used to clean up the main function (and not have
// nested switch statements).

// the functions used so that the user can select which webhost, ip address,
// internet, and email selections they want.
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
  printf("Choose Email Marketing service: Economy (1) or Deluxe (2) or Premium "
         "(3): ");
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
double bill(char webchoice, int webhost, int iphost, char emailchoice,
            int emailhost, char internetchoice, int internethost) {
  double total = 0;
  // printing the bill
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("AMCD HOSTING INC Bill Details\n");
  printf("---------------------------------------------------------------------"
         "----------\n");
  printf("Service                      Package                              "
         "Cost     \n");
  // printing out the webhost section.
  switch (webchoice) {
  case 'Y':
    total += printWeb(webhost, iphost);
    break;
  default:
    break;
  }
  // printing out the email section
  switch (emailchoice) {
  case 'Y':
    total += printEmail(emailhost);
    break;
  default:
    break;
  }
  // printing out the internet section
  switch (internetchoice) {
  case 'Y':
    total += printInternet(internethost);
    break;
  default:
    break;
  }

  return total;
}

// individual sections of the bill, with it being first the Web Service, then
// the Email, then the Internet.
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

  printf("Web Hosting                  %1d                                    "
         "$%8.2lf\n",
         webhost, packagecost);
  switch (iphost) {
  case 1:
    ipcost = 4.99;
    printf("    IP Shared                %1d                                   "
           " $%8.2lf\n",
           iphost, ipcost);
    break;
  case 2:
    ipcost = 9.99;
    printf("    IP Dedicated             %1d                                   "
           " $%8.2lf\n",
           iphost, ipcost);
    break;
  default:
    printf("    IP N/a                   N/a                                  "
           "$%8.2lf\n",
           0.00);
    break;
  }

  return packagecost + ipcost;
}

// printing the email price and selection.
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
  printf("Email Marketing              %1d                                    "
         "$%8.2lf\n",
         emailhost, emailcost);

  return emailcost;
}

// printing the internet price and selection.
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
  printf("Internet Marketing           %1d                                    "
         "$%8.2lf\n",
         internethost, internetcost);

  return internetcost;
}

// adding the ending bill amount and showing the user the amount of tax, a
// discount, and the total they will need to pay for the services.
int totalbill(int servicecounter, double total) {
  double discount;
  if (servicecounter > 1) {
    discount = -total * 0.1;
  } else {
    discount = 0;
  }
  printf("\n");
  printf("Subtotal:                                                         "
         "$%8.2lf\n",
         total);
  printf("Bundle Discount:             10%c                                  "
         "$%8.2lf\n",
         '%', discount);
  total += discount;
  printf("Total Before Tax:                                                 "
         "$%8.2lf\n",
         total);
  printf("Tax:                         6.5%c                                 "
         "$%8.2lf\n",
         '%', total * 0.065);
  printf("Amount Due:                                                       "
         "$%8.2lf\n",
         total + total * 0.065);

  return 0;
}
