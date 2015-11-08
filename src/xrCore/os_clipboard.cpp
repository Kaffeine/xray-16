////////////////////////////////////////////////////////////////////////////
// Module : os_clipboard.cpp
// Created : 21.02.2008
// Author : Evgeniy Sokolov
// Description : os clipboard class implementation
////////////////////////////////////////////////////////////////////////////

#include "xrCore.h"
#include "os_clipboard.h"

#include <SDL2/SDL_clipboard.h>

void os_clipboard::copy_to_clipboard(LPCSTR buf)
{
    SDL_SetClipboardText(buf);
}

void os_clipboard::paste_from_clipboard(LPSTR buffer, u32 const& buffer_size)
{
    VERIFY(buffer);
    VERIFY(buffer_size > 0);

    char *text = SDL_GetClipboardText();

    xr_strcpy(buffer, buffer_size, text);

    SDL_free(text);
}

void os_clipboard::update_clipboard(LPCSTR string)
{
    if (!SDL_HasClipboardText()) {
        SDL_SetClipboardText(string);
        return;
    }

    char *text = SDL_GetClipboardText();
    const int buffer_size = strlen(string) + strlen(text);
    char buffer[buffer_size];
    xr_strcpy(buffer, buffer_size, text);
    xr_strcat(buffer, buffer_size, string);
    copy_to_clipboard(buffer);

    SDL_free(text);
}
