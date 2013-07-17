#ifndef V8_SPOTIFY_OBJECT_H
#define V8_SPOTIFY_OBJECT_H


#include <stdlib.h>
#include "type.h"


namespace spotify {

	class Object {
		void *ref_;

	public:
		Object () : ref_(NULL) {}

		static Object *
		New();

		bool
		SetRef (void *ref);

		void *
		GetRef ();
	};
}
#endif