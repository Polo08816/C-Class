/*
 * TicTacToe.h
 *
 *  Created on: May 20, 2015
 *      Author: J14688
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

	char ticTacToeBoard [9];

};



#endif /* TICTACTOE_H_ */
