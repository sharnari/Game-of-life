#include <stdio.h>

void out_window(int axis_y, int axis_x, char *space) {
  for (int y = 0; y < axis_y; y++) {
    for (int x = 0; x < axis_x; x++) {
      printf("%c", space[x+y]);
    }
  printf("\n");
  }
}
int main(void) {
  int axis_x = 40;
  int axis_y = 10;
  char walls_lr = '#';
  char walls_tb = '=';
  char space[axis_x][axis_y];
  // set the array for the game window
  for (int y = 0; y < axis_y; y++) {
    for (int x = 0; x < axis_x; x++) {
      if (y == 0 || y == axis_y - 1) {
        space[x][y] = walls_tb;
      } else if (x == 0 || x == axis_x - 1) {
        space[x][y] = walls_lr;
      } else {
        space[x][y] = ' ';
      }
    }
  }
  // to output the game window
    out_window (axis_y, axis_x, *space);
  return 0;
}