/*Student Assignment Submission Form
I declare that the attached assignment is wholly my own work in accordance with UCF Academic Policy. No part of this assignment has been copied manually or electronically from any other source (including web sites) or distributed to other students. My name is: Awad Yousef, Date: 2/21/2024 */


#include <stdio.h>

int main (void) {
  // initializing all the variables
  char charchoice;
  int packagechoice;
  double packagecost;
  int ipchoice;
  double ipcost;

  // prompting the user to choose which web host they wish to get.
  printf("Welcome to AMCD Hosting Incorporated\nWould you like to subscribe to a Web Hosting Service? (Y or N): ");
  scanf("%c", &charchoice);
  switch (charchoice) {
    case 'Y':
      break; // if yes is selected. the program continues on as normal.
    default: // if anything but yes is chosen, the program will end.
      return 0;
  }

  // Asking the user which package type they want.
  printf("Choose package 1 (Silver), 2 (Gold), or 3 (Ultimate): ");
  scanf("%d", &packagechoice);

  // updating a float variable depending on what package is chose
  switch (packagechoice) {
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
      packagecost = 0.00;
      packagechoice = 0;
      break;
  }
  
  // asking the user to select if they want shared or dedicated ip address.
  printf("Choose IP type: Shared (1) or Dedicated (2): ");
  scanf("%d", &ipchoice);

  // updating the ip cost depending on the choice made above.
  

  // Displaying the 'reciept'/output desired by the AMCD hosting inc.
  printf("---------------------------------------------------------------------------\n");
  printf("AMCD HOSTING INC Bill Details\n");
  printf("---------------------------------------------------------------------------\n");
  printf("Service                      Package                              Cost     \n");
  printf("Web Hosting                  %1d                                    $%5.2lf\n", packagechoice, packagecost);   
  switch (ipchoice) {
    case 1:
      ipcost = 4.99;
      printf("    IP Shared                %1d                                    $%5.2lf\n", ipchoice, ipcost);
      break;
    case 2:
      ipcost = 9.99;
      printf("    IP Dedicated             %1d                                    $%5.2lf\n", ipchoice, ipcost);
      break;
    default:
      printf("    IP N/a                   N/a                                  $%5.2lf\n", 0.00);
      break;
  }
  printf("---------------------------------------------------------------------------\n");

  return 0;
}
