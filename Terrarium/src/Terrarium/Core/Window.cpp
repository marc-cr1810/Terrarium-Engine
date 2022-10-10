#include "tepch.h"
#include "Terrarium/Core/Window.h"

#ifdef TE_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Terrarium
{
	Scope<Window> Window::Create(const WindowProps& props)
	{
#ifdef TE_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
#else
		TE_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}
}