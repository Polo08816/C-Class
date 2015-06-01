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
	cout << "  " << ticTacToeBoard[0][0] << "  |  " << ticTacToeBoard[0][1] << "  |  " << ticTacToeBoard[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << ticTacToeBoard[1][0] << "  |  " << ticTacToeBoard[1][1] << "  |  " << ticTacToeBoard[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << ticTacToeBoard[2][0] << "  |  " << ticTacToeBoard[2][1] << "  |  " << ticTacToeBoard[2][2] << endl;

	cout << "     |     |     " << endl << endl;
}


