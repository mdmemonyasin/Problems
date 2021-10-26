#include <bits/stdc++.h>
using namespace std;
int main()
{
    Player player1 = new Player('X');
    Player player2 = new Player('O');
    Board board = new EmptyBoard();
    TicTacToe game = new TicTacToe(player1, player2, board);
    Player winner = game.start();
    cout<<winner;
}

interface TwoPlayerGame {
    
}

class TicTacToe
{   private static final Player player1, player2;
    private static final Board board;
    TicTacToe(Player player1, Player player2, Board board){
        this.player1 = player1;
        this.player2 = player2;
        this.board = board;
    }
    Player start()
    {
        Player currentPlayer = player1;
        while (!board.isTerminated())
        {
            move = currentPlayer.decide(board);
            board.make(move);
            if (currentPlayer == player1)
            {
                currentPlayer = player2;
            }
            else
            {
                currentPlayer = player2;
            }
        }
    }
};

class Player {
    Move decide(Board board);
}
