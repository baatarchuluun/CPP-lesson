// tictactoe.cpp
#include <iostream>
using namespace std;

void drawBoard(char board[3][3]);
bool checkWin(char board[3][3], char player);

int main() {
	char board[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	};
	char player = 'X';
	int turn, x, y;
	cout << "Welcome to Tic Tac Toe game\n";
	for (turn = 0; turn < 9; turn++) {
		// input x, y for player
		while (true) {
			cout << "Player " << player << "; x, y: (0-2) ";
			cin >> x >> y;
			if (x < 0 || x > 2 || y < 0 || y > 2 || board[x][y] != ' ')
				cout << "Invalid!\n";
			else
				break;
		}
		board[x][y] = player;
		drawBoard(board);
		if (checkWin(board, player)) {
			cout << "Winner: " << player;
			break;
		}
		player = (player == 'X') ? 'O' : 'X';
	}
	
	if (turn == 9 && !checkWin(board, 'X') && !checkWin(board, 'O'))
		cout << "Tentssen!!!";
		
	return 0;
}

void drawBoard(char board[3][3]) {
	cout << "-------------\n";
	for (int i = 0; i < 3; i++){
		cout << "| ";
		for (int j = 0; j < 3; j++){
			cout << board[i][j] << " | ";
		}
		cout << "\n-------------\n";
	}
}

bool checkWin(char board[3][3], char player) {
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == player && board[i][1] == player &&
			board[i][2] == player)
			return true;
		if (board[0][i] == player && board[1][i] == player &&
			board[2][i] == player)
			return true;
	}
	if (board[0][0] == player && board[1][1] == player &&
		board[2][2] == player)
		return true;
	if (board[0][2] == player && board[1][1] == player &&
		board[2][0] == player)
		return true;
	return false;
}




