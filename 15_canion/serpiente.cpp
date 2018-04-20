#include <stdio.h>
#include <stdlib.h>

int main(){

    while (snake == 1)

        {

               delay(40000000); // Delay of the loop.

                gotoxy (snakeX[0], snakeY[0]);

                printf("*");

                gotoxy (snakeX[nLength], snakeY[nLength]); // This erases the "trail" the snake leaves behind.

                printf(" ");
                for (i = nLength; i >= 1; i--) // Passing of values on the array. This means that the value of nSnakeX/Y[6] will be equivalent to the value of nSnakeX/Y[5] and so on. So nSnakeX/Y[1] would be equal to nSnake[0] and that makes the body of the snake.
                    {
                            snakeX[i] = snakeX[i - 1];
                            snakeY[i] = snakeY[i - 1];
                    }

                if ( kbhit()  )
                    {
                            nDir = getch();
                            if (nDir == 0)
                                    nDir = getch(); // Detects arrow key input.
                    }

                if ((nDir == UP && nDir2 != DOWN) || (nDir == DOWN && nDir2 != UP) || (nDir == LEFT && nDir2 != RIGHT) || (nDir == RIGHT && nDir2 != LEFT))
                        nDir2 = nDir; // This is used in order for the snake not to move in reverse. Example, if the snake is moving up, it will NOT move down because of the if statement.

                switch (nDir2)
                    {
                        case UP: snakeY[0]--; break;
                        case DOWN: snakeY[0]++; break;
                        case LEFT: snakeX[0]--; break;
                        case RIGHT: snakeX[0]++; break;
                    }

                if (snakeX[0] == food_x && snakeY[0] == food_y && snakeX[0] == food_y && snakeY[0] == food_x) // Collision detector with the food.
                    {
                            srand(time(NULL));
                            food_x = rand() % LENGTH + 2;
                            food_y = rand() % WIDTH + 2;
                            gotoxy (food_x, food_y);
                            printf("A");
                    }
                if (snakeY[0] == 0 || snakeX[0] == 0 || snakeY[0] == LENGTH * 2 - 2 || snakeX[0] == WIDTH - 1) // Collision detector with the walls.
                    {
                            snake = 0;
                            gotoxy(33, 10);
                            printf("Game Over!");
                    }
        }
}
}
}
}
}
}
return EXIT_SUCCESS;
}
