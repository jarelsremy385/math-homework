// Return a random number between 1 and 100
int getRandomNumber() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    return dist(mt);
}
