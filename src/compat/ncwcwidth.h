#ifndef NOTCURSES_COMPAT_WCWIDTH_H
#define NOTCURSES_COMPAT_WCWIDTH_H

// All mingw(-32/-64) toolchains use UTF-16LE encoded
// wide chars, so we need to provide our own implementations
// of wcwidth and wcswidth.
#ifdef __MINGW32__
int nc_wcwidth(wchar_t c);
int nc_wcswidth(const wchar_t *s, size_t n);

#define wcwidth(c) nc_wcwidth(c)
#define wcswidth(s, n) nc_wcswidth(s, n)
#endif

#endif // NOTCURSES_COMPAT_WCWIDTH_H