//
//  Team.h
//  lab4
//
//  Created by Xiang on 2017/10/23.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef Team_h
#define Team_h

#include <stdio.h>
#include <stdbool.h>


typedef struct{
    char name[20];
    int score;
    int handicap;
}Team;


void generateLeague(Team *league[8], bool is_handicap);

Team *game(Team *team1, Team *team2);

Team *tournament(Team *teams[], int number);

void printGame(Team *team1, Team *team2,Team *win_team);

#endif /* Team_h */
