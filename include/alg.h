// Copyright 2025 UNN-CS
#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_
#include <cstdint>

#ifdef _WIN32
#ifdef ST1_EXPORTS
#define ST1_API __declspec(dllexport)
#else
#define ST1_API __declspec(dllimport)
#endif
#else
#define ST1_API
#endif

bool ST1_API checkPrime(uint64_t value);
uint64_t ST1_API nPrime(uint64_t n);
uint64_t ST1_API nextPrime(uint64_t value);
uint64_t ST1_API sumPrime(uint64_t hbound);

#endif  // INCLUDE_ALG_H_
