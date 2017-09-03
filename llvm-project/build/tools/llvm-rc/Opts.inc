/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {nullptr})
PREFIX(prefix_1, {"/" COMMA "-" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "?", HELP, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help and exit.", nullptr, nullptr)
OPTION(prefix_1, "C", C, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "D", DEFINE, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Define a symbol for the C preprocessor.", nullptr, nullptr)
OPTION(prefix_1, "FM", FM, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "FO", FILEOUT, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Change the output file location.", nullptr, nullptr)
OPTION(prefix_1, "G1", G1, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "G2", G2, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "GN", GN, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "G", G, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "H", H, Flag, INVALID, HELP, nullptr, 0, 0,
       "Display this help and exit.", nullptr, nullptr)
OPTION(prefix_1, "I", INCLUDE, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Add an include path.", nullptr, nullptr)
OPTION(prefix_1, "LN", LANG_NAME, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Set the default language name.", nullptr, nullptr)
OPTION(prefix_1, "L", LANG_ID, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Set the default language identifier.", nullptr, nullptr)
OPTION(prefix_1, "NOLOGO", NOLOGO, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "N", ADD_NULL, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Null-terminate all strings in the string table.", nullptr, nullptr)
OPTION(prefix_1, "Q", Q, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "R", R, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "SL", SL, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "U", UNDEF, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Undefine a symbol for the C preprocessor.", nullptr, nullptr)
OPTION(prefix_1, "V", VERBOSE, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Be verbose.", nullptr, nullptr)
OPTION(prefix_1, "W", W, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "X", NOINCLUDE, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignore 'include' variable.", nullptr, nullptr)
OPTION(prefix_1, "Y", DUPID_NOWARN, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Suppress warnings on duplicate resource IDs.", nullptr, nullptr)
#endif // OPTION
