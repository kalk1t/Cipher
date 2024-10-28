#include "define.h"

char C_decryption(char* Text, int Rotation_Number) {
	char Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int Alpha_len = strlen(Alphabet);
	char Rotated_Alphabet[26];
	if (Rotation_Number < 0) {
		Rotation_Number = Rotation_Number - Rotation_Number - Rotation_Number;
		Rotation_Number = Alpha_len + Rotation_Number;
	}

	for (int i = 0;i < Alpha_len - Rotation_Number;i++) {
		Rotated_Alphabet[i] = Alphabet[i + Rotation_Number];
	}
	int j = 0;
	for (int i = Alpha_len - Rotation_Number;i < Alpha_len;i++) {
		Rotated_Alphabet[i] = Alphabet[j++];
	}

	int Text_len = strlen(Text);

	for (int i = 0;i < Text_len;i++) {
		Text[i] = toupper(Text[i]);
		for (int j = 0;j < Alpha_len;j++) {
			if (Text[i] == Rotated_Alphabet[j]) {
				Text[i] = Alphabet[j];
				break;
			}
		}
	}


	return *Text;
}
void C_Decrypt_win(HWND hwnd) {
	X = 100;
	Y = 50;
	W = 70;
	H = 50;
	C1 = CreateWindowA("static", " Text to Decrypt", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)1, 0, 0);

	X = 180;
	Y = 50;
	W = 200;
	H = 50;
	C2 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)C_text, 0, 0);

	X = 100;
	Y = 150;
	W = 70;
	H = 50;
	C3 = CreateWindowA("static", "rotation number", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)2, 0, 0);

	X = 180;
	Y = 150;
	W = 200;
	H = 50;
	C4 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)C_rotation, 0, 0);


	X = 100;
	Y = 350;
	W = 70;
	H = 50;
	C5 = CreateWindowA("static", " Decrypted Text", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)13, 0, 0);

	X = 180;
	Y = 350;
	W = 200;
	H = 50;
	C6 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)C_generated, 0, 0);


	X = 140;
	Y = 250;
	W = 200;
	H = 50;
	C7 = CreateWindowA("button", "GENERATE", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)C_Decrypt_generate, 0, 0);

	X = 420;
	Y = 420;
	W = 50;
	H = 20;
	C8 = CreateWindowA("button", "Back", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)back_c, 0, 0);

	X = 20;
	Y = 420;
	W = 50;
	H = 20;
	C9 = CreateWindowA("button", "Menu", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)menu, 0, 0);

	X = 210;
	Y = 420;
	W = 50;
	H = 20;
	C10 = CreateWindowA("button", "Retry", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)retry_c, 0, 0);


}
char C_encryption(char* Text, int Rotation_Number) {
	char Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int Alpha_len = strlen(Alphabet);
	char Rotated_Alphabet[26];
	if (Rotation_Number < 0) {
		Rotation_Number = Rotation_Number - Rotation_Number - Rotation_Number;
		Rotation_Number = Alpha_len + Rotation_Number;
	}

	for (int i = 0;i < Alpha_len - Rotation_Number;i++) {
		Rotated_Alphabet[i] = Alphabet[i + Rotation_Number];
	}
	int j = 0;
	for (int i = Alpha_len - Rotation_Number;i < Alpha_len;i++) {
		Rotated_Alphabet[i] = Alphabet[j++];
	}

	int Text_len = strlen(Text);
	for (int i = 0;i < Text_len;i++) {
		Text[i] = toupper(Text[i]);
		for (int j = 0;j < Alpha_len;j++) {
			if (Text[i] == Alphabet[j]) {
				Text[i] = Rotated_Alphabet[j];
				break;
			}
		}
	}


	return *Text;
}
void C_Encrypt_win(HWND hwnd) {
	X = 100;
	Y = 50;
	W = 70;
	H = 50;
	C1 = CreateWindowA("static", " Text to Encrypt", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)1, 0, 0);

	X = 180;
	Y = 50;
	W = 200;
	H = 50;
	C2 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)C_text, 0, 0);

	X = 100;
	Y = 150;
	W = 70;
	H = 50;
	C3 = CreateWindowA("static", "rotation number", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)2, 0, 0);

	X = 180;
	Y = 150;
	W = 200;
	H = 50;
	C4 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)C_rotation, 0, 0);


	X = 100;
	Y = 350;
	W = 70;
	H = 50;
	C5 = CreateWindowA("static", " Encrypted Text", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)3, 0, 0);

	X = 180;
	Y = 350;
	W = 200;
	H = 50;
	C6 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)C_generated, 0, 0);


	X = 140;
	Y = 250;
	W = 200;
	H = 50;
	C7 = CreateWindowA("button", "GENERATE", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)C_Encrypt_generate, 0, 0);


	X = 420;
	Y = 420;
	W = 50;
	H = 20;
	C8 = CreateWindowA("button", "Back", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)back_c, 0, 0);

	X = 20;
	Y = 420;
	W = 50;
	H = 20;
	C9 = CreateWindowA("button", "Menu", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)menu, 0, 0);

	X = 210;
	Y = 420;
	W = 50;
	H = 20;
	C10 = CreateWindowA("button", "Retry", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)retry_c, 0, 0);

}
void CAESAR(HWND hwnd) {

	X = 140;
	Y = 50;
	W = 200;
	H = 100;
	tmp_3 = CreateWindowA("button", "ENCRYPTION", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)C_encrypt, 0, 0);



	X = 140;
	Y = 200;
	W = 200;
	H = 100;
	tmp_4 = CreateWindowA("button", "DECRYPTION", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)C_decrypt, 0, 0);


	X = 420;
	Y = 420;
	W = 50;
	H = 20;
	tmp_5 = CreateWindowA("button", "Back", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)back_to_back, 0, 0);


}



void decryption_alpha(char* Alpha, char key_let) {
	int key_let_pos = 0;
	char tmp_array[length];

	for (int i = 0;i < length;i++) {
		tmp_array[i] = Alpha[i];
	}
	for (int i = 0;i < length;i++) {
		char tmp = tolower(tmp_array[i]);
		if (tmp == key_let) {
			key_let_pos = i;
			break;
		}
	}

	for (int i = 0;i < length - key_let_pos;i++) {
		Alpha[i] = tmp_array[key_let_pos + i];
	}
	int j = 0;
	for (int i = length - key_let_pos;i < length;i++) {
		Alpha[i] = tmp_array[j++];
	}



}
void V_decryption(char* sentence, char* key_word) {

	char Main_Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


	int key_len = strlen(key_word);
	int ciph_len = strlen(sentence);
	char key_tmp;
	char ciph_tmp;
	int key_count = 0;
	int ciph_pos = 0;

	for (int i = 0;i < ciph_len;i++) {
		if (sentence[i] == ' '
			|| sentence[i] == '.'
			|| sentence[i] == ','
			|| sentence[i] == '!'
			|| sentence[i] == '?'
			|| sentence[i] == ':'
			|| sentence[i] == ';') continue;
		key_tmp = tolower(key_word[key_count]);
		key_count++;
		if (key_count > key_len - 1) key_count = 0;
		decryption_alpha(Alphabet, key_tmp);

		ciph_tmp = tolower(sentence[i]);
		for (int j = 0;j < length;j++) {
			char alph_tmp = tolower(Main_Alphabet[j]);
			if (alph_tmp == ciph_tmp) {
				ciph_pos = j;
				break;
			}
		}
		sentence[i] = Alphabet[ciph_pos];
	}

}
void V_Decrypt_win(HWND hwnd) {

	X = 100;
	Y = 50;
	W = 70;
	H = 50;
	C1 = CreateWindowA("static", " Text to Decrypt", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)1, 0, 0);

	X = 180;
	Y = 50;
	W = 200;
	H = 50;
	C2 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)V_text, 0, 0);

	X = 100;
	Y = 150;
	W = 70;
	H = 50;
	C3 = CreateWindowA("static", "Key Word", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)2, 0, 0);

	X = 180;
	Y = 150;
	W = 200;
	H = 50;
	C4 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)V_key, 0, 0);


	X = 100;
	Y = 350;
	W = 70;
	H = 50;
	C5 = CreateWindowA("static", " Decrypted Text", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)3, 0, 0);

	X = 180;
	Y = 350;
	W = 200;
	H = 50;
	C6 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)V_generated, 0, 0);


	X = 140;
	Y = 250;
	W = 200;
	H = 50;
	C7 = CreateWindowA("button", "GENERATE", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)V_Decrypt_generate, 0, 0);


	X = 420;
	Y = 420;
	W = 50;
	H = 20;
	C8 = CreateWindowA("button", "Back", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)back_v, 0, 0);

	X = 20;
	Y = 420;
	W = 50;
	H = 20;
	C9 = CreateWindowA("button", "Menu", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)menu, 0, 0);

	X = 210;
	Y = 420;
	W = 50;
	H = 20;
	C10 = CreateWindowA("button", "Retry", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)retry_v, 0, 0);


}
int encryption_alpha(char* Alpha, char Letter, char sen_letter) {
	int cipher_pos = 0;
	int sen_letter_pos = 0;
	char temp_array[length];

	for (int i = 0;i < length;i++) {
		temp_array[i] = Alpha[i];
	}
	for (int i = 0;i < length;i++) {
		char tmp = tolower(Alpha[i]);
		if (tmp == sen_letter) {
			sen_letter_pos = i;
			break;
		}
	}

	for (int i = 0;i < length;i++) {
		char tmp = tolower(Alpha[i]);
		if (tmp == Letter) {
			cipher_pos = i;
			break;
		}
	}
	for (int i = 0;i < length - cipher_pos;i++) {
		Alpha[i] = temp_array[cipher_pos + i];
	}
	int j = 0;
	for (int i = length - cipher_pos;i < length;i++) {
		Alpha[i] = temp_array[j++];
	}

	int diff = length - cipher_pos;
	int encrypted_letter_pos = sen_letter_pos + diff;
	if (encrypted_letter_pos > length - 1) {
		encrypted_letter_pos = encrypted_letter_pos - length;
	}

	return encrypted_letter_pos;

}
void V_encryption(char* sentence, char* key) {
	char Main_Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


	int text_len = strlen(sentence);
	int key_len = strlen(key);
	int z = 0;
	for (int i = 0;i < text_len;i++) {
		if (sentence[i] == ' '
			|| sentence[i] == '.'
			|| sentence[i] == ','
			|| sentence[i] == '!'
			|| sentence[i] == '?'
			|| sentence[i] == ':'
			|| sentence[i] == ';') continue;

		char sen_tmp = tolower(sentence[i]);
		char key_tmp = tolower(key[z]);
		z++;

		if (z > key_len - 1) z = 0;


		int k = encryption_alpha(Alphabet, key_tmp, sen_tmp);
		sentence[i] = Main_Alphabet[k];
	}

}
void V_Encrypt_win(HWND hwnd) {
	X = 100;
	Y = 50;
	W = 70;
	H = 50;
	C1 = CreateWindowA("static", " Text to Encrypt", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)1, 0, 0);

	X = 180;
	Y = 50;
	W = 200;
	H = 50;
	C2 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)V_text, 0, 0);

	X = 100;
	Y = 150;
	W = 70;
	H = 50;
	C3 = CreateWindowA("static", "Key Word", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)2, 0, 0);

	X = 180;
	Y = 150;
	W = 200;
	H = 50;
	C4 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)V_key, 0, 0);


	X = 100;
	Y = 350;
	W = 70;
	H = 50;
	C5 = CreateWindowA("static", " Encrypted Text", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)3, 0, 0);

	X = 180;
	Y = 350;
	W = 200;
	H = 50;
	C6 = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, X, Y, W, H, hwnd, (HMENU)V_generated, 0, 0);


	X = 140;
	Y = 250;
	W = 200;
	H = 50;
	C7 = CreateWindowA("button", "GENERATE", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)V_Encrypt_generate, 0, 0);


	X = 420;
	Y = 420;
	W = 50;
	H = 20;
	C8 = CreateWindowA("button", "Back", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)back_v, 0, 0);

	X = 20;
	Y = 420;
	W = 50;
	H = 20;
	C9 = CreateWindowA("button", "Menu", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)menu, 0, 0);

	X = 210;
	Y = 420;
	W = 50;
	H = 20;
	C10 = CreateWindowA("button", "Retry", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)retry_v, 0, 0);


}
void VIGHNERE(HWND hwnd) {

	X = 140;
	Y = 50;
	W = 200;
	H = 100;
	tmp_3 = CreateWindowA("button", "ENCRYPTION", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)V_encrypt, 0, 0);



	X = 140;
	Y = 200;
	W = 200;
	H = 100;
	tmp_4 = CreateWindowA("button", "DECRYPTION", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)V_decrypt, 0, 0);


	X = 420;
	Y = 420;
	W = 50;
	H = 20;
	tmp_5 = CreateWindowA("button", "Back", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)back_to_back, 0, 0);

}


void buttons(HWND hwnd) {


	X = 140;
	Y = 50;
	W = 200;
	H = 100;
	tmp_1 = CreateWindowA("button", "CAESAR", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)caesar, 0, 0);



	X = 140;
	Y = 200;
	W = 200;
	H = 100;
	tmp_2 = CreateWindowA("button", "VIGHNERE", WS_VISIBLE | WS_CHILD, X, Y, W, H, hwnd, (HMENU)vighnere, 0, 0);






}
void Menu(HWND hwnd) {
	HMENU hmenu_bar = CreateMenu();

	HMENU hmenu_popup = CreateMenu();

	AppendMenuA(hmenu_popup, MF_STRING, about, "About");
	AppendMenuA(hmenu_popup, MF_STRING, quit, "Exit");
	AppendMenuA(hmenu_bar, MF_POPUP, (UINT)hmenu_popup, "&Menu");


	SetMenu(hwnd, hmenu_bar);
}


long CALLBACK control_main_win(HWND hwnd, unsigned int message, WPARAM wp, LPARAM lp) {


	switch (message) {

	case WM_CREATE:
	{
		buttons(hwnd);
		Menu(hwnd);



	}
	break;

	case WM_COMMAND:
		switch ((short)wp) {
		case caesar:
		{

			DestroyWindow(tmp_1);
			DestroyWindow(tmp_2);
			CAESAR(hwnd);

		}
		break;

		case back_to_back:
		{
			DestroyWindow(tmp_3);
			DestroyWindow(tmp_4);
			DestroyWindow(tmp_5);

			buttons(hwnd);
		}
		break;
		case C_encrypt:
		{

			DestroyWindow(tmp_3);
			DestroyWindow(tmp_4);
			DestroyWindow(tmp_5);

			C_Encrypt_win(hwnd);

		}
		break;

		case C_Encrypt_generate:
		{
			SendDlgItemMessageA(hwnd, C_text, WM_GETTEXT, 1024, (LPARAM)str);
			SendDlgItemMessageA(hwnd, C_rotation, WM_GETTEXT, 1024, (LPARAM)RN);
			rotation_number = atoi(RN);
			C_encryption(str, rotation_number);
			SendDlgItemMessageA(hwnd, C_generated, WM_SETTEXT, 1024, (LPARAM)str);


		}
		break;


		case C_decrypt:
		{
			DestroyWindow(tmp_3);
			DestroyWindow(tmp_4);
			DestroyWindow(tmp_5);

			C_Decrypt_win(hwnd);

		}
		break;

		case C_Decrypt_generate:
		{
			SendDlgItemMessageA(hwnd, C_text, WM_GETTEXT, 1024, (LPARAM)str);
			SendDlgItemMessageA(hwnd, C_rotation, WM_GETTEXT, 24, (LPARAM)RN);
			rotation_number = atoi(RN);
			C_decryption(str, rotation_number);
			SendDlgItemMessageA(hwnd, C_generated, WM_SETTEXT, 1024, (LPARAM)str);


		}
		break;

		case back_c:
		{
			DestroyWindow(C1);
			DestroyWindow(C2);
			DestroyWindow(C3);
			DestroyWindow(C4);
			DestroyWindow(C5);
			DestroyWindow(C6);
			DestroyWindow(C7);
			DestroyWindow(C8);
			DestroyWindow(C9);
			DestroyWindow(C10);


			CAESAR(hwnd);

		}
		break;

		case retry_c:
		{
			SendDlgItemMessageA(hwnd, C_text, WM_SETTEXT, 1024, (LPARAM)"");
			SendDlgItemMessageA(hwnd, C_rotation, WM_SETTEXT, 24, (LPARAM)"");
			SendDlgItemMessageA(hwnd, C_generated, WM_SETTEXT, 1024, (LPARAM)"");

		}
		break;

		case menu:
		{
			DestroyWindow(C1);
			DestroyWindow(C2);
			DestroyWindow(C3);
			DestroyWindow(C4);
			DestroyWindow(C5);
			DestroyWindow(C6);
			DestroyWindow(C7);
			DestroyWindow(C8);
			DestroyWindow(C9);
			DestroyWindow(C10);


			buttons(hwnd);
		}
		break;



		case vighnere:
		{
			DestroyWindow(tmp_1);
			DestroyWindow(tmp_2);

			VIGHNERE(hwnd);

		}
		break;

		case V_encrypt:
		{
			DestroyWindow(tmp_3);
			DestroyWindow(tmp_4);
			DestroyWindow(tmp_5);

			V_Encrypt_win(hwnd);
		}
		break;

		case V_Encrypt_generate:
		{
			SendDlgItemMessageA(hwnd, V_text, WM_GETTEXT, 1024, (LPARAM)str);
			SendDlgItemMessageA(hwnd, V_key, WM_GETTEXT, 24, (LPARAM)key);
			V_encryption(str, key);
			SendDlgItemMessageA(hwnd, V_generated, WM_SETTEXT, 1024, (LPARAM)str);
		}
		break;

		case V_decrypt:
		{
			DestroyWindow(tmp_3);
			DestroyWindow(tmp_4);
			DestroyWindow(tmp_5);

			V_Decrypt_win(hwnd);
		}
		break;

		case V_Decrypt_generate:
		{
			SendDlgItemMessageA(hwnd, V_text, WM_GETTEXT, 1024, (LPARAM)str);
			SendDlgItemMessageA(hwnd, V_key, WM_GETTEXT, 24, (LPARAM)key);
			V_decryption(str, key);
			SendDlgItemMessageA(hwnd, V_generated, WM_SETTEXT, 1024, (LPARAM)str);
		}
		break;


		case back_v:
		{
			DestroyWindow(C1);
			DestroyWindow(C2);
			DestroyWindow(C3);
			DestroyWindow(C4);
			DestroyWindow(C5);
			DestroyWindow(C6);
			DestroyWindow(C7);
			DestroyWindow(C8);
			DestroyWindow(C9);
			DestroyWindow(C10);

			VIGHNERE(hwnd);
		}
		break;

		case retry_v:
		{
			SendDlgItemMessageA(hwnd, V_text, WM_SETTEXT, 1024, (LPARAM)"");
			SendDlgItemMessageA(hwnd, V_key, WM_SETTEXT, 24, (LPARAM)"");
			SendDlgItemMessageA(hwnd, V_generated, WM_SETTEXT, 1024, (LPARAM)"");
		}
		break;


		case about:
		{

			MessageBoxA(hwnd, "Application's been made by Giorgi Samkharadze on 10/27/2024", "General Information", MB_OK);
		}
		break;

		case quit:
		{
			val = MessageBoxA(hwnd, "Do you really want to exit the application?", "Exit", MB_YESNO);
			if (val == IDYES) {
				DestroyWindow(hwnd);
			}
			else {
				break;
			}
			exit(121);
		}
		break;

		}
		break;
		//commands


	case WM_DESTROY:

		PostQuitMessage(9);
		exit(9);

		break;
		//
	}


	return DefWindowProc(hwnd, message, wp, lp);
}