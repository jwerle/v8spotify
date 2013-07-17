
#include "artist.h"

extern spotify::Artist
spotify::Artist::New () {
	sp_artist *s_artist;
	spotify::Artist *artist = new spotify::Artist();
	spotify::Object session = spotify::Session::GetCurrent();
	artist->SetRef(s_artist);

	return *artist;
}


extern spotify::Request
spotify::Artist::Browse (artistbrowse_complete_cb *cb, sp_artistbrowse_type type) {
	spotify::Request request = spotify::Request::New();

	return request;
}