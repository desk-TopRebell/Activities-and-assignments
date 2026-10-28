/* 
Name: Carl Oliver
Admission Number: BCS-05-0067/2026
Description: Room Occupancy array single branch
*/
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Generate random occupancy data
    for(floor = 0; floor < 5; floor++) {
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display occupied and vacant rooms per floor
    printf("Room Occupancy Report\n\n");

    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for(room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d:\n", floor + 1);
        printf("Occupied Rooms = %d\n", occupied);
        printf("Vacant Rooms = %d\n\n", vacant);
    }

    return 0;
}
