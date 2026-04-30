#include <stdlib.h>
#include <SDL2/SDL.h>
#include <unistd.h>
#include <time.h>

#define SIZE 20	// size of one block 
#define WIN_WIDTH  900
#define WIN_HEIGHT 600

enum Direction { UP, DOWN, LEFT, RIGHT };

struct Game {
	int width;
	int height;
	int is_end;
};

struct Node {
	int x;
	int y;
	enum Direction direction;
	struct Node* next;
};

struct Snake {
	struct Node* head;
	struct Node* tail;
	int length;  
};


void set_random_position(int& x, int& y, struct Game* game) {
	x = random() % game->width;
	y = random() % game->height;
}


void add_node(struct Snake* snake) {
	struct Node* new = malloc(sizeof(struct Node));
	int x = snake->tail->x;
	int y = snake->tail->y;
	
	switch (tail->direction) {
		case UP:
			y--;
			break;

		case DOWN: 
			y++;
			break;
	
		case LEFT:
			x++;
			break;

		case RIGHT: 
			x--;
			break;
	}

	new->x = x;
	ney->y = y;
	snake->tail->next = new
	snake->tail = new;
	snake->length++;
}


void set_starting_position(int& x, int& y, struct Game* game, const int margin) {
	set_random_position(x, y, game);
	// Snake is creating in straight line so this will
	// prevent printing snake's tail which crosses borders
	if (x < game->width / 2) ? &x += margin : &x -= margin;
	if (y < game->height / 2) ? &y += margin : &y -= margin;
}


void init_snake(struct Snake* snake, struct Game* game) {
	const int length = 5;	// starting length

	for (int i = 0; i < length; i++) {
		if (i == 0) {
			struct Node* head = malloc(sizeof(struct Node));
			set_starting_position(&head->x, &head->y, game, length);
			head->direction = rand() % 4;
			snake->head = head;
			snake->tail = head;
			snake->length = 1;
		}
		else add_node(snake);
	}
}


int main() {
	srand(time(NULL));
	SDL_Window* window = SDL_CreateWindow(
		"Snake",			// title	
		SDL_WINDOWPOS_CENTERED,		// horizontal position	
		SDL_WINDOWPOS_CENTERED,		// vertical position  
		WIN_WIDTH,			// window width
		WIN_HEIGHT,			// window height
		SDL_WINDOW_SHOWN		// window is shown
	);
	SDL_Event event;
	SDL_Surface* main_surface = SDL_GetWindowSurface(window);
	struct Game game = {
		(WIN_WIDTH - 2 * SIZE) / SIZE,
		(WIN_HEIGHT - 2 * SIZE) / SIZE,
		0
	};
	


	// game loop
	while (!game.is_end) {

	}

	SDL_Delay(3000);
	return 0;
}
