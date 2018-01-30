#include <stdio.h> // Standard library included for file io

/* -------------------- FILE IO -------------------- */
int flwrite(char *file_name, char *text); // Writes text to file
int flappend(char *file_name, char *text); // Appends text to file; Creates new if !exist
int flread(char *file_name); // Reads and printf from file; Returns 0 if file doesn't exist
char *flreadline(FILE *fp); // Reads next line from file
int flsearch(char *file_name, char *text); // Searches file for text
int flmerge(char *file_one, char *file_two); // Merges two files
void fldelete(char *file_name); // Deletes a file
int flcat(char *file_one, char *file_two); // Appends text of file_one to file_two
int flcopy(char *file_one, char *file_two); // Writes text of file_one to file_two
int flmove(char *file_one, char *file_two); // Moves a file
int fllinecount(char *file_name); // Returns number of lines present in a file

/* -------------------- CONVERSIONS -------------------- */
char *itos(long long int number); // Converts long-long-int to string

/* -------------------- INTS AND FLOATS -------------------- */
int intint(int *arr, int n, int arrsize); // Searches array for int, returns 1 if found
int intlen(int number); // Returns int length
int maxint(int *arr, int arrsize); // Returns maximum int value from array
int minint(int *arr, int arrsize); // Returns minimum int value from array
long long int sum(int *arr, int arrsize); // Returns sum of elements of int array
long long int multiply(int *arr, int arrsize); // Returns multipli. of elements of int array
double flsum(double *arr, int size); // Returns sum of elements of double array
double flmultiply(double *arr, int size); // Returns multipli. of elements of double array

/* -------------------- STRING MANIPULATION -------------------- */
char *uppercase(char *text); // Returns upper-cased version of text
char *lowercase(char *text); // Returns lower-cased version of text
char *reverse(char *text); // Returns reversed-version of text
char **split(char *str, char split_char); // Splits a string and returns an array of strings
char *replace(char *text, char old_char, char new_char); // Replaces old char with new char in text
char *substring(char *str, int start_index, int end_index); // Returns substring containing chars of str in range
int wordcount(char *text); // Returns number of words present in text 
int charcount(char *text); // Returns number of chars present in text
int charoccur(char *text, char chr); // Returns number of occurence of chr in text

/* -------------------- SORTING -------------------- */
void strsort(char **arr, int arrsize); // Sorts array of string / pointers in ascending
void intsort(int *arr, int size); // Sorts array of int in ascending

/* -------------------- ARRAYS -------------------- */
int arrlen(int arrsize); // Returns length of int array, takes sizeof(array) as parameter
int *intearr(int args, ...); // Returns array with args int
char **strarr(int args, ...); // Returns array with args str

/* -------------------- SWAP -------------------- */
void strswap(char **str_one, char **str_two); // Swaps two strings
void intswap(int *int_one, int *int_two); // Swaps two ints
void flswap(float *fl_one, float *fl_two); // Swaps two floats
void charswap(char *chr_a, char *chr_b); // Swaps two characters

/* -------------------- TIME -------------------- */
char *timenow(); // Returns string of current time
struct tm *tstruct(); // Returns time struct
int getsec(); // Returns second of current time; Range : 0 - 59
int getmin(); // Returns minute of current time; Range : 0 - 59
int gethour(); // Returns hour of current time; Range : 0 - 23
int getmonth(); // Returns current month; Range : 1 - 12
int getyear(); // Returns current year
int getwday(); // Returns day of week; Range : 1 - 7
int getmday(); // Returns day of month; Range : 1 - 31
int getyday(); // Returns day of year; Range : 1 - 365

/* -------------------- DATA STREAMS -------------------- */
int swapstream(int n_desc, int std_desc); // Swaps standard streams with others
int redstream(int n_desc, int std_desc); // Redirects standard streams

/* -------------------- ERROR HANDLING -------------------- */
void error(char *msg); // Displays error msg and exits program with exit code 1
void failure(char *msg); // Displays task failure msg

/* -------------------- SYSTEM FUNCTIONS -------------------- */
void openurl(char *url); // Opens webpage containing the url
int catchsignal(int sig, void (*handler)(int)); // Catches and handles signals
void ppause(char *msg); // Pauses a program; Waits for user input (char)
void psleep(int second); // Delays or pauses program for n second (n == second(arg))
void clear(); // Clears console screen


