#ifndef V8_SPOTIFY_OBJECT
#define V8_SPOTIFY_OBJECT

#include "v8spotify.h"

namespace spotify {

	class Object {
		void *ref_;

		Object () : ref_(NULL) {}

	public:
		static Object*
		New();

		bool
		SetRef (void *ref);

		void *
		GetRef ();
	};
}
#endif