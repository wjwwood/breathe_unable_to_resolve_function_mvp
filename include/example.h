#pragma once

#include <stddef.h>

/// A.
void
a(void * ptr);

/// B.
void
b(void * ptr, int (* comp)(void *, void *));
