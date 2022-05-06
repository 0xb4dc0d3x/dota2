#include "Dota2.h"

void DrawMenu() {
	std::cout << "[DotaTwo sv_cheats patcher]" << std::endl;
	std::cout << "\n[Enter number]" << std::endl;
	std::cout << "[1] Patch sv_cheats" << std::endl;
	std::cout << "[2] Revert Patch" << std::endl;
	std::cout << "\nNOTE: You need to patch after almost every update of the game client!" << std::endl;
	std::cout << "\n-=-Improved by 0xb4dc0d3x-=-" << std::endl;
	std::cout << "\n|> ";

	int USER_INPUT;
	std::cin >> USER_INPUT;

	if (USER_INPUT == 1)
	{
		if (Patcher::patch_sv_cheats(false))
			std::cout << "[+] Sv_cheats Patched" << std::endl;
	}
	else if (USER_INPUT == 2)
	{
		if (Patcher::patch_sv_cheats(true))
			std::cout << "[+] Sv_cheats Reverted" << std::endl;
	}
	else
	{
		DrawMenu();
	}
}

int main() {
	if (!Paths::get_dota_path(&Globals::dota_path)) {
		system("pause");
		return 0;
	}

	DrawMenu();

	system("pause");
	return 0;
}
