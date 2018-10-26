#include "assert.h"
#include "dominion.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

int main (int argc, char** argv) {
  struct gameState myGameState;

  int k[10] = { adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall };

  printf ("Unit Test 4: Testing the Initializaton of Game.\n");
  
  int r = initializeGame(2, k, atoi(argv[1]), &myGameState);

  assert (r == 0);

  return 0;
}
