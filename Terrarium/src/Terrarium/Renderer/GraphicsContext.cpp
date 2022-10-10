#include "tepch.h"
#include "Terrarium/Renderer/GraphicsContext.h"

#include "Terrarium/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Terrarium
{
	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    TE_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		TE_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}
}