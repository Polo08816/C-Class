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

	void drawBoard(const int &row, const int &col) const;
	bool isValidMove();
	void recordMOve();
	int isWinner();
	int isDraw();

private:

};



#endif /* TICTACTOE_H_ */
