//
//  Team.c
//  lab4
//
//  Created by Xiang on 2017/10/23.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "Team.h"
#include <string.h>
#include <stdlib.h>     /* malloc, free, rand */
#include <time.h>

int _round = 0;


void generateLeague(Team *league[8], bool is_handicap){
    srand ((int)time(NULL));
    char *name_array[8] = {"Rockets","Warriors","Thunder","Lakers","Timberwolves","Cavaliers","Spurs","Bulls"};
    
    for (int i=0; i<8; i++) {
        Team *team = malloc(sizeof(Team));
        strcpy(team->name,name_array[i]);
        team->score = 0;
        team->handicap = is_handicap?rand()%15+5:0;
        league[i] = team;
    }
}


Team *game(Team *team1, Team *team2){
    team1->score = 0;
    team2->score = 0;
    while (team1->score == team2->score) {

        int score1 = 70+rand()%60;
        int score2 = 70+rand()%60;
        team1->score = score1 + team1->handicap;
        team2->score = score2 + team2->handicap;
    }
    return team1->score > team2->score?team1:team2;
}




Team *tournament(Team *teams[], int number){
    
    printf("Round: %d:\n",++_round);
    Team *win_array[number/2];
    for (int i=0; i<number/2; i++) {
        Team *first_team = teams[i*2];
        Team *second_team = teams[i*2+1];
        
        Team *win_team = game(first_team, second_team);
        win_array[i] = win_team;
        printGame(first_team, second_team, win_team);
        if (win_team->handicap) {
            printf("(%s handicap:%d, %s handicap:%d)\n\n",first_team->name,first_team->handicap,second_team->name,second_team->handicap);
        }
    }
    printf("\n");
    if (number == 2) {
        _round = 0;
        Team *win_team = win_array[0];
        printf("%s is the winner!\n",win_team->name);
        return win_team;
    }
    return tournament(win_array, number/2);
}


void printGame(Team *team1, Team *team2,Team *win_team){
    printf("%s vs %s, score: %d : %d, %s WIN!\n",team1->name,team2->name,team1->score,team2->score,win_team->name);
}

