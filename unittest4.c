#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

// Unit Test 4: Is Player is finished for this Turn 
/* List of cards you can start from: estate,
copper, // not a Kingdom card
adventurer,
council_room,
feast, 
gardens,
mine, 
remodel, 
smithy,
village,
baron,
great_hall,
minion, 
steward, 
tribute,
ambassador, 
cutpurse,
embargo, 
outpost,
salvager, 
sea_hag,
treasure_map */
int main(int argc, char** argv)
{
	struct gameState myState;
	int k[10] = { adventurer, smithy, baron, council_room, feast, gardens, great_hall, mine, remodel, village };
	int a = initializeGame(2, k, 3, &myState);
	
	printf("Unit Test 4: Is this Player's Turn Done? \n");

	int myTest = isGameOver(&myState);
	assert(myTest == 0);
	printf("Test Passed\n");

	assert(a == 0);
	return 0;
} 
