/*
 * TicTacToe.h
 *
 *  Created on: May 20, 2015
 *      Author: Kevin Kuo
 */

#ifndef TICTACTOE_H_
#define TICTACTOE_H_

using namespace std;

class TicTacToe
{
public:

	TicTacToe();
	~TicTacToe();

	void drawBoard() const;
	bool isValidMove();
	void recordMOve();
	int isWinner();
	int isDraw();

private:

	char ticTacToeBoard [][];

};



#endif /* TICTACTOE_H_ */
