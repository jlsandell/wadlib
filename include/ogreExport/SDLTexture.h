/*
wadlib
Copyright (c) 2012 Bruno Sanches  http://code.google.com/p/wadlib

This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.
Permission is granted to anyone to use this software for any purpose, 
including commercial applications, and to alter it and redistribute it freely, 
subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef SDL_TEXTURE_H
#define SDL_TEXTURE_H

#include <ITexture.h>

#include <SDL.h>

class SDLTexture_c: public ITexture_c
{
	public:
		SDLTexture_c();
		virtual ~SDLTexture_c();

		virtual void SetSize(uint16_t w, uint16_t h);
		virtual void *GetPixels();
		virtual void SetPalette(const void *);

		void Save(const char *szFileName);
	private:
		SDL_Surface *pstSurface;
};

#endif
