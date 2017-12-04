/*

   vdexExtractor
   -----------------------------------------

   Anestis Bechtsoudis <anestis@census-labs.com>
   Copyright 2017 by CENSUS S.A. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#ifndef _DEX_DECOMPILER_H_
#define _DEX_DECOMPILER_H_

#include "common.h"
#include "dex.h"

typedef enum { kDecompilerV6 = 0, kDecompilerV10, kDecompilerMax } dexDecompiler_ver;

void dexDecompiler_init(dexDecompiler_ver);

// Dex decompiler driver function using quicken_info data
bool dexDecompiler_decompile(const u1 *, dexMethod *, const u1 *, u4, bool);

// Dex decompiler walk method that simply disassembles code blocks
void dexDecompiler_walk(const u1 *, dexMethod *, bool *);

#endif
