
int main() {
    // Generate a random number between 1 and 10
    int num = rand() % 10 + 1;

    // Ask the user to guess the number
    cout << "Guess a number between 1 and 10: ";
    int guess;
    cin >> guess;

    // Check if the user's guess is correct
    if (guess == num) {
        cout << "You are correct! The number was " << num << "." << endl;
    } else {
        cout << "Sorry, you are incorrect. The number was " << num << "." << endl;
    }

    return 0;
}