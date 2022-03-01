#include "masterVisual.h"

void addGuess(MastermindWindow &mwin, const string code, const char startLetter)
{
	Guess guess{code,startLetter};
    mwin.guesses.push_back(guess);
	// definer addGuess
}

void addFeedback(MastermindWindow &mwin, const int correctPosition, const int correctCharacter)
{
	// definer addFeedback
}

void MastermindWindow::drawCodeHider()
{
	if(code_hidden) {
		draw_rectangle(Point{padX, 3 * padY}, winW - size * padX, padY, Color::black);
	}
}

MastermindWindow::MastermindWindow(int x, int y, int w, int h, int size, const string &title) 
: AnimationWindow(x, y, w, h, title),
guessBtn{upperLeftCornerBtn.x, upperLeftCornerBtn.y, btnW, btnH, "Add"},
guess{upperLeftCornerInBox.x, upperLeftCornerInBox.y, inBoxW, inBoxH, "Guess"},
size(size)
{
	add(guess);
	add(guessBtn);
	guessBtn.callback(cb_guess, this);
};

string MastermindWindow::wait_for_guess()
{
	while (!button_pressed && !should_close())
	{
		for(int guessIndex = 0; guessIndex < guesses.size(); guessIndex++) {
			//Implementer gjett slik at det vises fargede rektangler i grafikkvinduet
			{
                // Tegn rektangler ved bruk av draw_rectangle()
				for(i = 0; i < size; i++){
					draw_rectangle(Point{xPos,yPos}, padX,padY,c);
				}
				
				

			}
		}

		for(int feedbackIndex = 0; feedbackIndex < feedbacks.size(); feedbackIndex++) {
			// Implementer feedback

			for (int i = 0; i < size; i++)
			{
				// Tegn sirkler ved hjelp av draw_circle
			}
		}

		// Burde tegnes sist siden den skal ligge på toppen
		drawCodeHider();

		next_frame();
	}
	button_pressed = false;
	string newGuess = guess.value();
	guess.value(0);
	return newGuess;
}

string MastermindWindow::getInput(unsigned int n, char lower, char upper)
{
	bool validInput = false;
	string guess;
	while (!validInput && !should_close())
	{
		guess.clear();
		string input = wait_for_guess();
		if (input.size() == n)
		{
			for (unsigned int i = 0; i < n; i++)
			{
				char ch = input.at(i);
				if (isalpha(ch) && toupper(ch) <= upper && lower <= toupper(ch))
				{
					guess += toupper(ch);
				}
				else
					break;
			}
		}
		if (guess.size() == n)
		{
			validInput = true;
		}
		else
		{
			cout << "Invalid input guess again" << endl;
		}
	}
	return guess;
}

void MastermindWindow::setCodeHidden(bool hidden) {
	code_hidden = hidden;
}