#pragma once

#define KAVALIER_VERSION_MAJOR @PROJECT_VERSION_MAJOR@
#define KAVALIER_VERSION_MINOR @PROJECT_VERSION_MINOR@
#define KAVALIER_VERSION_PATCH @PROJECT_VERSION_PATCH@
#define KAVALIER_VERSION "@PROJECT_VERSION@"

namespace kavalier {

	typedef struct {
		unsigned int major,
		unsigned int minor,
		unsigned int patch,
	} Version;

}

