#include <stdio.h>

// candidate names
#define candidate1 "Jhon Doe"
#define candidate2 "Ima Knight"
#define candidate3 "Hillary Clark"
#define candidate4 "William Smith"

// function prototypes
int mainMenu();
void castVote(int voteCount[]);
void votesCount(int voteCount[]);
void getleadingCandidate(int voteCount[]);

int main(void) {
  int userChoice;
  int voteCount[5] = {0};

  // starting the program
  userChoice = mainMenu();

  // giving the user the option they chose.
  while (userChoice != 4) {
    switch (userChoice) {
    case 1:
      castVote(voteCount);
      userChoice = mainMenu();
      break;
    case 2:
      votesCount(voteCount);
      userChoice = mainMenu();
      break;
    case 3:
      getleadingCandidate(voteCount);
      userChoice = mainMenu();
      break;
    default:
      printf("Please choose a valid options: ");
      scanf("%d", &userChoice);
      break;
    }
  }

  return 0;
}

int mainMenu() {
  int choice = 0;
  // printing the menu
  printf("##### Welcome to the Voting Portal (2024) #####\n");
  printf("   1. Cast a Vote\n");
  printf("   2. Find Vote Count\n");
  printf("   3. Find Leading Candidate\n");
  printf("   4. Exit\n");
  printf("\nPlease enter your choice: ");
  // asking for which option the user wants
  scanf(" %d", &choice);
  // returning the choice that the user made
  return choice;
}

void castVote(int *voteCount) {
  int choice;

  printf("1. %s\n", candidate1);
  printf("2. %s\n", candidate2);
  printf("3. %s\n", candidate3);
  printf("4. %s\n", candidate4);
  printf("5. None of the Above\n");
  printf("\nPlease enter your choice (1-5): ");
  scanf("%d", &choice);
  choice -= 1; // converting it to the element address (0-3)
  if (choice >= 5 || choice <= -1) {
  } else {
    voteCount[choice] += 1;
  }
  printf("\nThanks for voting!\n\n");
}

void votesCount(int votesCount[]) {
  printf("\n##### Voting Statistics #####\n\n");
  printf("%s - %d\n", candidate1, votesCount[0]);
  printf("%s - %d\n", candidate2, votesCount[1]);
  printf("%s - %d\n", candidate3, votesCount[2]);
  printf("%s - %d\n", candidate4, votesCount[3]);
  printf("Spoiled Votes - %d\n\n", votesCount[4]);
}

void getleadingCandidate(int voteCount[]) {
  int greatestVote = -1;
  int index = -1;
  int duplicates[5] = {0};
  int amountOfDuplicates = 0;

  for (int i = 0; i < 5; i++) {
    if (greatestVote < voteCount[i]) {
      greatestVote = voteCount[i];
      index = i;
    }
  }
  for (int i = 0; i < 5; i++) {
    if (voteCount[i] == greatestVote) {
      duplicates[i] = 1;
      amountOfDuplicates++;
    }
  }
  printf("\n[ ");
  for (int i = 0; i < 5; i++) {
    if (duplicates[i] == 1) {
      switch (i) {
        case 0:
          printf("%s", candidate1);
          break;
        case 1:
          printf("%s", candidate2);
          break;
        case 2:
          printf("%s", candidate3);
          break;
        case 3:
          printf("%s", candidate4);
          break;
        case 4:
          printf("Spoiler Votes\n\n");
          break;
      }
      printf(" ");
    }
  }
  printf("]\n\n");
}
