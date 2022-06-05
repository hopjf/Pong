#include <iostream>
#include <string>
#include "graphics.hpp"
#include "input.hpp"

int leftScore = 0;
int rightScore = 0;

class bumper {
	int position;
	int speed = 5;
};

class ball {
	int x;
	int y;
	int angle;
	int speed = 1;
	void bounce() {
		angle += 2 * (90 - angle);
	}
};







int main(int argc, char *argv[]) {
	Renderer graphics;
	Input input;
	bumper left;
	bumper right;
	int x = 0;
	while(input.GameIsRunning) {
		input.Update();
		graphics.DrawSquare(x * 2, 123, x * 2, 123);
		graphics.Render();
		x++;
		input.UpPressed();

	}
	return 0;
}

/*int garbage;

namespace eighteen {
	int garbage;

	int chicken() {
		int gun = 7;
		return gun;
	}
}

class totinos {
public:
	std::string fortnite() {
		return "gamers";
	}
};



void main() {
	totinos jonesy;

	std::cout << "this is a word" << std::endl;
	std::cout << eighteen::chicken() << std::endl;
	std::cout << eighteen::garbage << std::endl;
	std::cout << garbage << std::endl;
	std::cout << jonesy.fortnite() << std::endl;
	
}*/