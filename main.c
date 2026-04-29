#include <stdio.h>
#include <SDL2/SDL.h>
#include <unistd.h>

#define WIN_WIDTH	900
#define WIN_HEIGHT	600
#define SIZE	20	// size of one block 

typedef enum Direction { UP, DOWN, LEFT, RIGHT } Direction;

typedef struct Game {
	int width;
	int height;
	int is_end;
} Game;

typedef struct Node {
	int x;
	int y;
	Node* next;
} Node;

typedef struct Snake {
	Node* head;
	Direction direction;	
	int length;  
} Snake;

void add_node(Snake* snake, int x, int y) {
	Node* tmp = snake->head;
	Node* new = (Node*) malloc(sizeof(struct Node))	
	new->x = x;
	new->y = y;

	while (tmp != NULL) {
		tmp = tmp->next;
	}

	tmp->next = new;
	snake->length++;
}
void init_snake(Snake* snake) {
	const int length = 5;	// starting length
	int x, y;
	Direction direction

	for (i = 0; i < length; i++) {
		if (i == 0) {
			Node* head = (Node*) malloc(sizeof(struct Node));
			head->x = x;
			head->y = y;
			head->direction = direction;
			snake->head = head;
			snake->length = 1;
		}
		else {
			// TODO
		}
	}
}

int main() {
	SDL_Window* window = SDL_CreateWindow(
		"Snake",		// title	
		SDL_WINDOWPOS_CENTERED,	// horizontal position	
		SDL_WINDOWPOS_CENTERED,	// vertical position  
		WIN_WIDTH,		// window width
		WIN_HEIGHT,		// window height
		SDL_WINDOW_SHOWN	// window is shown
	);
	SDL_Event event;
	SDL_Surface* main_surface = SDL_GetWindowSurface(window);
	Game game = {
		(WIDTH - 2) / SIZE,
		(HEIGHT - 2) / HEIGHT,
		0
	};
	


	// game loop
	while (!is_end) {

	}

	SDL_Delay(3000);
	return 0;
}
