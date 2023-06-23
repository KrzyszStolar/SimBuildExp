// SimBuildExp v.0.5.2.h: plik dołączany dla standardowych systemowych plików dołączanych,
// lub pliki dołączane specyficzne dla projektu.

#pragma once

#include <iostream>
#include <cstdio>
#include <vector>
#include <ctime>
#include <conio.h>
#include <ranges>
#include "Object.h"
#include "Achievements.h" 
#include "Player.h"
#define left game_space[player.get_row()][player.get_col() - 1]
#define up game_space[player.get_row() - 1][player.get_col() ]
#define down game_space[player.get_row() + 1][player.get_col() ]
#define right game_space[player.get_row()][player.get_col() + 1]
#define curr game_space[player.get_row()][player.get_col()]
#define cur_map show_map(game_space, player.get_row() - 5, player.get_row() + 5, player.get_col() - 9, player.get_col() + 10)
#define drewno "Wydobyles 1 sztuke drewna"
#define kamien "Wydobyles 1 sztuke kamienia"

