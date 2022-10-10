#pragma once

#include "Terrarium/Core/PlatformDetection.h"

#ifdef AC_PLATFORM_WINDOWS
	#ifndef NOMINMAX
		#define NOMINMAX
	#endif
#endif

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <array>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "Terrarium/Core/Base.h"
#include "Terrarium/Core/Log.h"

#ifdef TE_PLATFORM_WINDOWS
	#include <Windows.h>
#endif