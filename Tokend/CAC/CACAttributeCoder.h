/*
 *  Copyright (c) 2004 Apple Computer, Inc. All Rights Reserved.
 * 
 *  @APPLE_LICENSE_HEADER_START@
 *  
 *  This file contains Original Code and/or Modifications of Original Code
 *  as defined in and that are subject to the Apple Public Source License
 *  Version 2.0 (the 'License'). You may not use this file except in
 *  compliance with the License. Please obtain a copy of the License at
 *  http://opensource.apple.com/apsl and read it before using this
 *  file.
 *  
 *  The Original Code and all software distributed under the License are
 *  distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 *  EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 *  INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 *  Please see the License for the specific language governing rights and
 *  limitations under the License.
 *  
 *  @APPLE_LICENSE_HEADER_END@
 */

/*
 *  CACAttributeCoder.h
 *  TokendMuscle
 */

#ifndef _CACATTRIBUTECODER_H_
#define _CACATTRIBUTECODER_H_

#include "AttributeCoder.h"
#include <string>

#include <PCSC/musclecard.h>


//
// A coder that reads the data of an object
//
class CACDataAttributeCoder : public Tokend::AttributeCoder
{
	NOCOPY(CACDataAttributeCoder)
public:

	CACDataAttributeCoder() {}
	virtual ~CACDataAttributeCoder();

	virtual void decode(Tokend::TokenContext *tokenContext,
		const Tokend::MetaAttribute &metaAttribute, Tokend::Record &record);
};


#endif /* !_CACATTRIBUTECODER_H_ */

