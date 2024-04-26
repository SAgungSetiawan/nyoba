#include <vector>
#include <iostream>
using namespace std;

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

void greeting()
{
    cout << "\n\n===============================\n";
    cout << "Tebak Kata: Bahasa Indonesia\n";
    cout << "===============================\n\n";
    cout << "Intruksi: Selamatkan Temanmu sebelum dia di gantung dengan menebak huruf..\n\n";
}

void if_failed(int failed)
{
    if (failed == 0)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
    else if (failed == 1)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |   O \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
    else if (failed == 2)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |   O \n";
        cout << "   |   | \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
    else if (failed == 3)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |   O \n";
        cout << "   |  /| \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
    else if (failed == 4)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |   O \n";
        cout << "   |  /|\\ \n";
        cout << "   |     \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
    else if (failed == 5)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |   O \n";
        cout << "   |  /|\\ \n";
        cout << "   |  /  \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
    else if (failed == 6)
    {
        cout << "   +---+ \n";
        cout << "   |   | \n";
        cout << "   |   O \n";
        cout << "   |  /|\\ \n";
        cout << "   |  / \\ \n";
        cout << "   |     \n";
        cout << " ========= \n\n";
    }
}

void wrong_answer_status(vector<char> wrongAnswers, string answer)
{
    cout << "Jawaban Terakhir Kamu Yang Salah : \n";

    for (int i = 0; i < wrongAnswers.size(); i++)
    {
        cout << wrongAnswers[i] << " ";
    }

    cout << "\n\nTebak Kata:\n";

    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[i] << " ";
    }
}

void end_game(string answer, string wordToGuess)
{
    if (answer == wordToGuess)
    {
        cout << "Hore!! Kamu Telah Berhasil Menyelamatkan Temanmu, Kamu Telah Menjadi Pahlawan!\n";
        cout << "Selamat ya!\n";
    }
    else
    {
        system(CLEAR_SCREEN);
        cout << ":( Temanmu Sudah Digantung\n";
    }
}

int main()
{
    system(CLEAR_SCREEN);
    greeting();

    string wordToGuess = "asdfgh";
    string answer = "______";
    int failed = 0;
    vector<char> wrongAnswers;
    bool guessed = false;
    char userGuess;

    while (answer != wordToGuess && failed < 7)
    {
        if_failed(failed);
        wrong_answer_status(wrongAnswers, answer);

        cout << "\n\nPlease enter your guess: ";
        cin >> userGuess;

        if (!isalpha(userGuess))
        {
            cout << "Invalid input. Please enter a letter.\n";
            continue; // Skip the rest of the loop iteration
        }

        // Check if the letter has been guessed before
        if (find(wrongAnswers.begin(), wrongAnswers.end(), userGuess) != wrongAnswers.end())
        {
            cout << "You've already guessed this letter. Try a different one.\n";
            continue; // Skip the rest of the loop iteration
        }

        for (int i = 0; i < wordToGuess.length(); i++)
        {
            if (userGuess == wordToGuess[i])
            {
                answer[i] = userGuess;
                guessed = true;
            }
        }

        if (guessed)
        {
            system(CLEAR_SCREEN);
            cout << "\nBenar!\n";
        }
        else
        {
            system(CLEAR_SCREEN);
            cout << "\nJawaban Kamu Salah!.\n";
            wrongAnswers.push_back(userGuess);
            failed++;
        }
        guessed = false;
    }

    end_game(answer, wordToGuess);
    return 0;
}
