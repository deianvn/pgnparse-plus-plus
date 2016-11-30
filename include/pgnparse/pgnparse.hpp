#ifndef PGNPARSE_PGNPARSE_H
#define PGNPARSE_PGNPARSE_H

#include <string>
#include <vector>

namespace pgnparse {
	
	class pgngame;
	
	std::vector<std::string> splitPgn(const std::string& pgn);
	
	std::vector<pgnparse::pgngame> parsePgnGame(const std::string& pgnGame);
	
}

#endif
