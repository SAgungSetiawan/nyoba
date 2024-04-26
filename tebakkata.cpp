#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int SIZE = 23;

class WordSearchGame {
private:
    vector<string> board;

public:
    // Constructor menerima papan kata sebagai parameter
    WordSearchGame(const vector<string>& initialBoard) : board(initialBoard) {}

    // Mencetak papan kata
    void printBoard() {
        for (int i = 0; i < SIZE; ++i) {
            cout << board[i] << endl;
        }
    }

    // Mencari kata secara horizontal, vertikal, dan diagonal
    bool searchWord(string word) {
        // Implementasi pencarian kata yang sama seperti sebelumnya
        // ...
    }
};

int main() {
    // Papan kata ditentukan dalam program
    vector<string> initialBoard = {
        "ABCDABCDEFABCDEFABCDEF",
        "GHIJKLMNOPQRSTUVWXYZ",
        "ABCDEFGHIJKLMABCDEFGHI",
        "NOPQRSTUVWXYZNOPQRSTU",
        "VWXYZABCDEFGHIJKLMN",
        "OPQRSTUVWXABCDEFGHIJ",
        "KLMNOPQRSTUVWXYZABCD",
        "EFGHIJKLMNOPQRSTUVWXY",
        "DEFGHIJKLMNOPQRSTUVWX",
        "FGHIJKLMNOPQRSTUVWXYZA",
        "BCDEFGHIJKLMNOPQRSTUV",
        "ZABCDEFGHIJKLMNOPQRSTUVW",
        "YZABCDEFGHIJKLMNOPQRSTU",
        "BCDEFGHIJKLMNOPQRSTUVW",
        "XYZABCDEFGHIJKLMNOPQRST",
        "RSTUVWXYZABCDEFGHIJKLMNOP",
        "QRSTUVWXYABCDEFGHIJKLMN",
        "KLMNOPQRSTUVWXYZABCDEFGHIJ",
        "NOPQRSTUVWXYZABCDEFGHIJK",
        "BCDEFGHIJKLMNOPQRSTUVWXYZ",
        "EFGHIJKLMNOPQRSTUVWXYZABCD",
        "FGHIJKLMNOPQRSTUVWXYZABCD",
        "HIJKLMNOPQRSTUVWXYZABCDEF"
    };

    WordSearchGame game(initialBoard);
    cout << "Papan kata:" << endl;
    game.printBoard();

    int input1;
    cout << "Masukkan jumlah kata yang ingin dicari: ";
    cin >> input1;

    for (int i = 0; i < input1; ++i) {
        string word;
        cout << "Masukkan kata yang ingin dicari: ";
        cin >> word;

        if (game.searchWord(word)) {
            cout << "Kata \"" << word << "\" ditemukan." << endl;
        } else {
            cout << "Kata \"" << word << "\" tidak ditemukan." << endl;
        }
    }

    return 0;
}

