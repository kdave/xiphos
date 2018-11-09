/*
  Xiphos, a UCI chess engine
  Copyright (C) 2018 Milos Tatarevic

  Xiphos is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Xiphos is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TABLES_H
#define TABLES_H

#include "game.h"

extern int pst_mid[P_LIMIT][BOARD_SIZE], pst_end[P_LIMIT][BOARD_SIZE];
extern int distance[BOARD_SIZE][BOARD_SIZE];

extern const int pawn_shield[BOARD_SIZE];
extern const int pawn_storm[2][BOARD_SIZE];
extern const int connected_pawns[2][N_PHASES][BOARD_SIZE];

void init_pst();
void init_distance();

#endif