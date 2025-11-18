#include "changecase.h"

void tcase(std::ifstream& inFile, std::ofstream& outFile) {
	int ch;
	int pred=' ';
	while ((ch = inFile.get()) != EOF) {
		int a = (pred == ' ' or pred == '\n' or pred == '\r' or pred == '\t');
		if (a) {
			if (ch >= 'a' and ch <= 'z') {
				ch = (ch - 'a') + 'A';
				pred = ch;
			}
			else {pred = ch; }
		}
		else {
			if (ch >= 'A' and ch <= 'Z') {
				ch = (ch - 'A') + 'a';
				pred = ch;
			}
			else { pred = ch; }
		}
		outFile.put(ch);
	}
}

void gcase(std::ifstream& inFile, std::ofstream& outFile) {
	int ch;
	while ((ch = inFile.get()) != EOF) {
		if (ch >= 'a' and ch <= 'z') {
			ch = (ch - 'a') + 'A';
		}
		else if (ch >= 'A' and ch <= 'Z') {
			ch = (ch - 'A') + 'a';
		}
		outFile.put(ch);
	}
}

void ucase(std::ifstream& inFile, std::ofstream& outFile) {
	int ch;
	while ((ch = inFile.get()) != EOF) {
		if (ch >= 'a' and ch <= 'z') {
			ch = (ch - 'a') + 'A';
		}
		outFile.put(ch);
	}
}

void lcase(std::ifstream& inFile, std::ofstream& outFile) {
	int ch;
	while ((ch = inFile.get()) != EOF) {
		if (ch >= 'A' and ch <= 'Z') {
			ch = (ch - 'A') + 'a';
		}
		outFile.put(ch);
	}
}

