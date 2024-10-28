#include "main.h"


long CALLBACK control_main_win(HWND hwnd, unsigned int message, WPARAM wp, LPARAM lp);

void buttons(HWND hwnd);
void Menu(HWND hwnd);

void C_Encrypt_win(HWND hwnd);
void C_Decrypt_win(HWND hwnd);

void V_Encrypt_win(HWND hwnd);
void V_Decrypt_win(HWND hwnd);

void CAESAR(HWND hwnd);
void VIGHNERE(HWND hwnd);

char C_encryption(char*, int);
char C_decryption(char*, int);

void V_encryption(char*, char*);
int encryption_alpha(char*, char, char);
void V_decryption(char*, char*);
void decryption_alpha(char*, char);

