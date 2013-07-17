
#include <stdio.h>
#include "v8spotify.h"
#include "artist.h"

int
main (int argc, char *argv[]) {
	puts("\n---- v8spotify bro ---- ");

	spotify::Object session = spotify::Session::New();
	spotify::Object artist = spotify::Artist::New();

	return 0;
}