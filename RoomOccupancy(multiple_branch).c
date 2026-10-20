/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Water Bill Calculator
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(NULL));

    // Assign random occupancy
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 or 1

                if(chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    // Display total occupied rooms
    printf("Total Occupied Rooms Across All Branches = %d\n",
           totalOccupied);

    return 0;
}
