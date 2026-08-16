#include <stdio.h>

typedef struct {
    char name[64];
    char team[64];
    int runs;
} batsman;

void main() {
    batsman batsmen[4];
    int max_runs_idx = 0, max_runs = 0;

    printf("Enter the Name, Team, and Runs of 4 batsmen: \n");

    for (int i = 0; i < 4; i++) {
        printf("Name: ");
        scanf(" %63[^\n]", batsmen[i].name);

        printf("Team: ");
        scanf(" %63[^\n]", batsmen[i].team);

        printf("Runs: ");
        scanf("%d", &batsmen[i].runs);
        
        if (batsmen[i].runs > max_runs) {
            max_runs_idx = i;
            max_runs = batsmen[i].runs;
        }

        printf("\n");
    }

    printf("Top Batsman\n");
    printf("Name: %s\n", batsmen[max_runs_idx].name);
    printf("Team: %s\n", batsmen[max_runs_idx].team);
    printf("Runs: %d\n", batsmen[max_runs_idx].runs);
}