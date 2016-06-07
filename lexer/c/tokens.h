typedef enum token {
	AUTO = 1,
	BREAK,
	CASE,
	CHAR,
	CONST,
	CONTINUE,
	DEFAULT,
	DO,
	DOUBLE,
	ELSE,
	ENUM,
	EXTERN,
	FLOAT,
	FOR,
	GOTO,
	IF,
	INT,
	LONG,
	REGISTER,
	RETURN,
	SHORT,
	SIGNED,
	SIZEOF,
	STATIC,
	STRUCT,
	SWITCH,
	TYPEDEF,
	UNION,
	UNSIGNED,
	VOID,
	VOLATILE,
	WHILE,
	INTEGER_LITERAL,
	FLOAT_LITERAL,
	STRING_LITERAL,
	ELLIPSIS,
	RIGHT_ASSIGN,
	LEFT_ASSIGN,
	ADD_ASSIGN,
	SUB_ASSIGN,
	MUL_ASSIGN,
	DIV_ASSIGN,
	MOD_ASSIGN,
	AND_ASSIGN,
	XOR_ASSIGN,
	OR_ASSIGN,
	RIGHT_OP,
	LEFT_OP,
	INC_OP,
	DEC_OP,
	PTR_OP,
	AND_OP,
	OR_OP,
	LE_OP,
	GE_OP,
	EQ_OP,
	NE_OP,
	SEMICOLON,
	LEFT_CURLY,
	RIGHT_CURLY,
	COMMA,
	COLON,
	EQUAL,
	LEFT_PAREN,
	RIGHT_PAREN,
	LEFT_SQUARE,
	RIGHT_SQUARE,
	DOT,
	AMPERSAND,
	EXCLAMATION,
	TILDE,
	MINUS,
	PLUS,
	ASTERISK,
	SLASH,
	PERCENT,
	LESS_THAN,
	GREATER_THAN,
	CARET,
	PIPE,
	QUESTION,
	IDENTIFIER,
} token;