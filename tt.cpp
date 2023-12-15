#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 2
#define MAX_PLAYERS 500
#define MAX_NAME_LENGTH 50

typedef struct
{
  char name[MAX_NAME_LENGTH];
  int score;
} Player;

int main()
{
  int n;
  scanf("%d", &n);

  char teamNames[MAX_TEAMS][MAX_NAME_LENGTH];
  Player players[MAX_PLAYERS];
  int teamScores[MAX_TEAMS] = {0};
  int maxScore = 0;
  char mvp[MAX_NAME_LENGTH];

  for (int i = 0; i < MAX_TEAMS; i++)
  {
    scanf("%s", teamNames[i]);
  }

  for (int i = 0; i < n; i++)
  {
    char playerName[MAX_NAME_LENGTH];
    char teamName[MAX_NAME_LENGTH];
    int score;

    scanf("%s %s %d", playerName, teamName, &score);

    strcpy(players[i].name, playerName);
    players[i].score = score;

    for (int j = 0; j < MAX_TEAMS; j++)
    {
      if (strcmp(teamName, teamNames[j]) == 0)
      {
        teamScores[j] += score;
        if (teamScores[j] > maxScore)
        {
          maxScore = teamScores[j];
          strcpy(mvp, playerName);
        }
        break;
      }
    }
  }

  if (teamScores[0] == teamScores[1])
  {
    printf("ended in a draw\n");
  }
  else
  {
    int winner = (teamScores[0] > teamScores[1]) ? 0 : 1;
    printf("%s\n", teamNames[winner]);
  }

  printf("%s\n", mvp);

  return 0;
}
