#pragma once

#define KAVALIER_VERSION_MAJOR 0
#define KAVALIER_VERSION_MINOR 1
#define KAVALIER_VERSION_PATCH 0
#define KAVALIER_VERSION "0.1.0"

namespace kavalier {

	typedef struct {
		unsigned int major,
		unsigned int minor,
		unsigned int patch,
	} Version;

}

