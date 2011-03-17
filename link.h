#pragma once
#include "common.h"
#include "binary.h"
uint32_t b_lookup_sym(const struct binary *binary, const char *sym, bool must_find);
void b_relocate(struct binary *binary, const struct binary *kern, uint32_t slide);
uint32_t b_find_sysent(const struct binary *kern);
