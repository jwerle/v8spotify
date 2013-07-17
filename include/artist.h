#ifndef V8_SPOTIFY_ARTIST_H
#define V8_SPOTIFY_ARTIST_H

#include <spotify.h>
#include "object.h"
#include "request.h"
#include "session.h"


namespace spotify {

	class Artist : Object {
	public:
		static Artist
		New();


		Request
		Browse(artistbrowse_complete_cb *cb, sp_artistbrowse_type type);
	};
}

#endif