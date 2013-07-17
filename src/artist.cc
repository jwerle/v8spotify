
#include <spotify.h>
#include "artist.h"

spotify::Object
spotify::Artist::New () {
	spotify::Object *artist = spotify::Object::New();
	sp_artist *s_artist;
	spotify::Object session = spotify::Session::GetCurrent();
	artist->SetRef(s_artist);

	return *artist;
}