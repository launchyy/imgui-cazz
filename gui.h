#pragma once
#include <d3d9.h>

namespace gui 
{
	//window size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;

	//winapi window variables
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	//window movement
	inline POINTS position = { };

	//dirx variables
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	//window creation n' destruction
	void CreateHWindow(
		const char* windowName,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;

	//device creation n' destruction
	bool CreateDevice() noexcept;
	bool ResetDevice() noexcept;
	bool DestroyDevice() noexcept;

	//imgui creation n' destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}
