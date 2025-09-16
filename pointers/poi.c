#include <stdio.h>

void add_points( int* player_score ) {
    *player_score = *player_score + 10;
}

int main() {
    int player_score = 0;
    printf("The score is: %d\n", player_score);

    add_points( &player_score ); // Notice the '&' here!

    printf("Now the score is: %d\n", player_score);
    return 0;
}