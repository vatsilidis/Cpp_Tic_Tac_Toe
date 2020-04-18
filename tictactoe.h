/*
This is a Tic Tac Toe game        
Lampros Vatsilidis

future updates:
- To avoid hang on when a character enters as input.
- To add GUI qith QT Framework
*/



#ifndef TICTACTOE_H
#define TICTACTOE_H
using namespace std;

class tictactoe{
public:
  tictactoe ();
  bool play (int x, int y, char c);
  char checkwin ();
  void print ();
  char swap (char inp);
  void play ();

private:
  char array[3][3];
};
#endif 