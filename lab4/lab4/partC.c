//
//  partC.c
//  lab4
//
//  Created by Xiang on 2017/10/23.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "Team.h"

int main(int argc, const char * argv[]) {

    Team *league[8];
    generateLeague(league,true);
    tournament(league, 8);

    return 0;
}
