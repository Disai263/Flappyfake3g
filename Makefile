bin/FlappyGame : src/FlappyGame.cpp include/*
	c++ src/FlappyGame.cpp -o bin/FlappyGame -I include -lcurses

run : bin/FlappyGame
	./bin/FlappyGame