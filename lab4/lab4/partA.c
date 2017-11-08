//
//  partA.c
//  lab4
//
//  Created by Xiang on 2017/10/23.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "Team.h"


int main(int argc, const char * argv[]) {
   
    
    Team *league[8];
    generateLeague(league,false);
    
    for (int i=0; i<8; i++) {
        for (int j=i+1; j<8; j++) {
            Team *team1 = league[i];
            Team *team2 = league[j];
            Team *win_team = game(team1,team2);
            printGame(team1, team2, win_team);
        }
    }
    
    

    return 0;
}
