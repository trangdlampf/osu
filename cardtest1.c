#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

// Card Test: Adventurer
int main()
{
	int seed = 1000;
	struct gameState myGameState, myTestGameState;
	int k[10] = { adventurer, council_room, gardens, smithy, ambassador, cutpurse, embargo, outpost, salvager, treasure_map };

	printf("Card Test 1: Adventurer\n");

	initializeGame(2, k, seed, &myGameState); // 2 is number of Players, k is the Action/kingdom Cards
	memcpy(&myTestGameState, &myGameState, sizeof(struct gameState));
	adventurerCard(&myTestGameState, 0);

	printf("Expected: %d, Versus What We Get: %d\n", myGameState.handCount[myGameState.whoseTurn] + 2, myTestGameState.handCount[myTestGameState.whoseTurn]);
		
	return 0;
}
