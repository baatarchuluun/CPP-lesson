// tictactoe.cpp @Baatarchuluun Altanbayar. C++ training
#include <iostream>
using namespace std;

void drawBoard(char board[10][10]);
bool checkWin(char board[10][10], char player);

int main() {
	char board[10][10];
	char player = 'X';
	int turn, x, y;
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = ' ';
		}
	}
	
	cout << "Welcome to Tic Tac Toe game\n";
	drawBoard(board);
	
	for (turn = 0; turn < 100; turn++) {
		while (true) {
			cout << "Player " << player << ". Enter x, y (0-9): ";
			cin >> x >> y;
			if (x < 0 || x > 9 || y < 0 || y > 9 || board[x][y] != ' ')
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
	
	if (turn == 100 && !checkWin(board, 'X') && !checkWin(board, 'O'))
		cout << "Tentssen!!!";
		
	return 0;
}

void drawBoard(char board[10][10]) {
	cout << "---------------------------------------------\n";	
	cout << "    | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |\n";
	cout << "---------------------------------------------\n";	

	for (int i = 0; i < 10; i++) {
		cout << "| " << i << " | ";
		for (int j = 0; j < 10; j++) {
			cout << board[i][j] << " | ";
		}
		cout << "\n---------------------------------------------\n";
	}
}

bool checkWin(char board[10][10], char player) {
	for (int i = 0; i < 10; i++) {
		// row
		for (int x = 0; x < 6; x++) {
			if (board[i][x] == player && board[i][x + 1] == player && board[i][x + 2] == player 
				&& board[i][x + 3] == player && board[i][x + 4] == player)
				return true;
		}
		// column
		for (int y = 0; y < 6; y++) {
			if (board[y][i] == player && board[y + 1][i] == player && board[y + 2][i] == player 
				&& board[y + 3][i] == player && board[y + 4][i] == player)
				return true;
		}
	}
	// diagonal
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (board[i][j] == player && board[i + 1][j + 1] == player && board[i + 2][j + 2] == player 
				&& board[i + 3][j + 3] == player && board[i + 4][j + 4] == player)
				return true;
		}
	}
	// other diagonal
	for (int i = 0; i < 6; i++) {
		for (int j = 4; j < 10; j++) {
			if (board[i][j] == player && board[i + 1][j - 1] == player && board[i + 2][j - 2] == player 
				&& board[i + 3][j - 3] == player && board[i + 4][j - 4] == player)
				return true;
		}
	} 
	
	return false;
}
