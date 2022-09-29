#define RED "\x1b[31;1m"
#define GREEN "\x1b[32;1m"
#define YELLOW "\x1b[33;1m"
#define BLUE "\x1b[34;1m"
#define MAGENTA "\x1b[35;1m"
#define CYAN "\x1b[36;1m"
#define WHITE "\x1b[37;1m"
#define RESET "\x1b[0m"

void printCode(const std::string &code);
bool isMatching(const std::string &code, std::string &userCode);
inline void showMoves(std::vector<std::string> &prevMoves);
void readCode(std::string &code);
void setup(unsigned int &maxGames, unsigned int &maxGuess);


const unsigned int PEGS = 4;
