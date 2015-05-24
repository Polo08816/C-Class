/*
 * TicTacToe.cpp
 *
 *  Created on: May 20, 2015
 *      Author: Kevin Kuo
 */

#include <array>
#include <iostream>

#include "TicTacToe.h"

using namespace std;

int main()
{

	cout << "Welcome to the Tic Tac Toe Game" << endl;


}

void TicTacToe::drawBoard() const
{

	cout << "     |     |     " << endl;
	cout << "  " << ticTacToeBoard[0] << "  |  " << ticTacToeBoard[1] << "  |  " << ticTacToeBoard[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << ticTacToeBoard[3] << "  |  " << ticTacToeBoard[4] << "  |  " << ticTacToeBoard[5] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << ticTacToeBoard[6] << "  |  " << ticTacToeBoard[7] << "  |  " << ticTacToeBoard[8] << endl;

	cout << "     |     |     " << endl << endl;
}


