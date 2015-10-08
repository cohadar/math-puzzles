#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define MAX_STEPS 200
#define MAX_JUMPS 300
#define JUMP_UP 3
#define JUMP_DOWN 4

int solve(int n, bool print)
{
	int c = n;
	int jumps = 0;
	if (print) printf("jump=%d step=%d\n", jumps, c);
	if (print) printf("####################\n");
	// jumps down until cross half
	while (c > n / 2) {
		c -= JUMP_DOWN;
		jumps++;
		if (print) printf("jump=%d step=%d\n", jumps, c);
	}
	if (c <= 0-JUMP_DOWN) return 0;
	if (print) printf("####################\n");
	// jumps up until on top
	while (c < n) {
		c += JUMP_UP;
		jumps++;
		if (print) printf("jump=%d step=%d\n", jumps, c);
	}
	if (c > n) {
		if (print) printf("%d->%d\n", c, n);
		c = n;
	}
	if (print) printf("####################\n");
	// jumps all the way down
	while (c > 0) {
		c -= JUMP_DOWN;
		jumps++;
		if (print) printf("jump=%d step=%d\n", jumps, c);
	}
	if (c < 0) {
		if (print) printf("%d->0\n", c);
		c = 0;
	}
	if (print) printf("####################\n");
	// jumps all the way up
	while (c < n) {
		c += JUMP_UP;
		jumps++;
		if (print) printf("jump=%d step=%d\n", jumps, c);
	}
	if (c > n) {
		if (print) printf("%d->%d\n", c, n);
		c = n;
	}
	return jumps;
}

void search_space()
{
	int solutions[MAX_JUMPS] = {0};
	int steps[MAX_JUMPS] = {0};

	for (int s = 1; s <= MAX_STEPS; s++) {
		int jumps = solve(s, false);
		if (jumps > 0) {
			assert(jumps < MAX_JUMPS);
			solutions[jumps]++;
			steps[jumps] = s;
		}
	}
	printf("## Unique solutions for number of jumps.\n");
	for (int jumps = 0; jumps < MAX_JUMPS; jumps++) {
		if (solutions[jumps] == 1 && steps[jumps] > 0) {
			printf("steps=%d, jumps=%02d\n", steps[jumps], jumps);
		}
	}
}

int main()
{
	// search_space();
	solve(112, true);
	return 0;
}