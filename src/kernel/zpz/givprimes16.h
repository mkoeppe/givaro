#ifndef _GIV_PRIMES16_H_
#define _GIV_PRIMES16_H_
// ==========================================================================
// $Source: /var/lib/cvs/Givaro/src/kernel/zpz/givprimes16.h,v $
// Copyright(c)'94-97 by Givaro Team
// see the copyright file.
// Authors: T. Gautier
// Time-stamp: <02 Oct 07 16:43:17 Jean-Guillaume.Dumas@imag.fr>
// ==========================================================================
// Description:
// - set of primes less than 2^16

#include <stddef.h>

  // ---------------------------------------------  class Primes16
class Primes16  {
public:

  // -- Returns the number of primes of this ctxt
static size_t count() { return _size; } 

static size_t ith(size_t i) { 
//    JGD 02.10.2007 : dependent of system/givconfig.h
//    GIVARO_ASSERT( (i>=0)&&(i<(int)_size), "[Primes16::ith] index out of bounds");
    return _primes[i]; 
} 

private:
static const size_t _size;
static const size_t  _primes[];
};


#endif
