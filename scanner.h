#ifndef keiko_scanner_h
#define keiko_scanner_h

typedef enum {

} TokenType;

typedef struct {
    TokenType type;
    const char* start;
    int length;
    int line;
} Token;

void initScanner(const char* source);
Token scanToken();

#endif
