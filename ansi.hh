#pragma once

/*****************************************************************************
 *
 *  ansi.hh
 *  Bitmap Display
 *
 *  MIT License
 *  
 *  Copyright (c) 2025 Dennis Munsie
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 *****************************************************************************/

#define ANSI_RESET              "\033[0m"
#define ANSI_BOLD_ON            "\033[1m"
#define ANSI_ITALICS_ON         "\033[3m"
#define ANSI_UNDERLINE_ON       "\033[4m"
#define ANSI_INVERSE_ON         "\033[7m"
#define ANSI_STRIKETHROUGH_ON   "\033[9m"
#define ANSI_BOLD_OFF           "\033[22m"
#define ANSI_ITALICS_OFF        "\033[23m"
#define ANSI_UNDERLINE_OFF      "\033[24m"
#define ANSI_INVERSE_OFF        "\033[27m"
#define ANSI_STRIKETHROUGH_OFF  "\033[29m"
#define ANSI_FG_BLACK           "\033[30m"
#define ANSI_FG_RED             "\033[31m"
#define ANSI_FG_GREEN           "\033[32m"
#define ANSI_FG_YELLOW          "\033[33m"
#define ANSI_FG_BLUE            "\033[34m"
#define ANSI_FG_MAGENTA         "\033[35m"
#define ANSI_FG_CYAN            "\033[36m"
#define ANSI_FG_WHITE           "\033[37m"
#define ANSI_FG_DEFAULT         "\033[39m"
#define ANSI_BG_BLACK           "\033[40m"
#define ANSI_BG_RED             "\033[41m"
#define ANSI_BG_GREEN           "\033[42m"
#define ANSI_BG_YELLOW          "\033[43m"
#define ANSI_BG_BLUE            "\033[44m"
#define ANSI_BG_MAGENTA         "\033[45m"
#define ANSI_BG_CYAN            "\033[46m"
#define ANSI_BG_WHITE           "\033[47m"
#define ANSI_BG_DEFAULT         "\033[49m"
#define ANSI_CURSOR_ON          "\033[?25h"
#define ANSI_CURSOR_OFF         "\033[?25l"
#define ANSI_CLEAR_LINE         "\033[2K"
#define ANSI_CLEAR_SCREEN       "\033[2J"

#define ANSI_ALT_SCREEN_ON      "\033[?1049h"
#define ANSI_ALT_SCREEN_OFF     "\033[?1049l"

// cursor movement
#define ANSI_MOVE_CURSOR_UP(l)    "\033[" #l "A"
#define ANSI_MOVE_CURSOR_DOWN(l)  "\033[" #l "B"
#define ANSI_MOVE_CURSOR_RIGHT(l) "\033[" #l "C"
#define ANSI_MOVE_CURSOR_LEFT(l)  "\033[" #l "D"
#define ANSI_MOVE_CURSOR(l, c)    "\033[" #l ";" #c "H"

// xterm 256 color support
#define ANSI_256_FG_COLOR(c)    "\033[38;5;" #c "m"
#define ANSI_256_BG_COLOR(c)    "\033[48;5;" #c "m"

// 24-bit color support
#define ANSI_24b_FG_COLOR(r, g, b)  "\033[38;2;" #r ";" #g ";" #b "m"
#define ANSI_24b_BG_COLOR(r, g, b)  "\033[48;2;" #r ";" #g ";" #b "m"

// terminal title
#define ANSI_TERMINAL_TITLE_PREFIX  "\033]0;"
#define ANSI_TERMINAL_TITLE_SUFFIX  "\007"
#define ANSI_TERMINAL_TITLE(s)  ANSI_TERMINAL_TITLE_PREFIX s ANSI_TERMINAL_TITLE_SUFFIX

// useful ASCII codes
#define BEL                     '\a'
#define BS                      '\b'
#define CR                      '\r'
#define LF                      '\n'

// UTF-8 block character
#define LOWER_HALF_BLOCK        "\xe2\x96\x84"
