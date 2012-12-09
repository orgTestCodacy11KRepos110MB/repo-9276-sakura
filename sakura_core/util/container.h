/*
	�R���e�i��

	2007.11.27 kobake �쐬
*/
/*
	Copyright (C) 2008, kobake

	This software is provided 'as-is', without any express or implied
	warranty. In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

		1. The origin of this software must not be misrepresented;
		   you must not claim that you wrote the original software.
		   If you use this software in a product, an acknowledgment
		   in the product documentation would be appreciated but is
		   not required.

		2. Altered source versions must be plainly marked as such,
		   and must not be misrepresented as being the original software.

		3. This notice may not be removed or altered from any source
		   distribution.
*/
#ifndef SAKURA_CONTAINER_82819006_7BEE_4D84_82A0_B61B0E0BAFD79_H_
#define SAKURA_CONTAINER_82819006_7BEE_4D84_82A0_B61B0E0BAFD79_H_

#include <vector>
#include <algorithm> //find

//! vector�ɂ�����Ƌ@�\��ǉ�������
template <class T>
class vector_ex : public std::vector<T>{
public:
	// -- -- �萔 -- -- //
	static const size_t INVALID_INDEX = (size_t)-1;

public:
	// -- -- �C���^�[�t�F�[�X -- -- //
	//!�v�f��T���B�������炻�̃C���f�b�N�X��Ԃ��B������Ȃ�������INVALID_INDEX��Ԃ��B
	size_t index_of(const T& t) const
	{
		const_iterator p = find(begin(),end(),t);
		if(p!=end()){
			return p-begin();
		}
		else{
			return INVALID_INDEX;
		}
	}

	//!�v�f��T���B�������true�B
	bool exist(const T& t) const
	{
		return index_of(t)!=INVALID_INDEX;
	}

	//!�v�f��ǉ��B�������d�������v�f�͒e���B
	bool push_back_unique(const T& t)
	{
		if(!exist(t)){
			push_back(t);
			return true;
		}
		return false;
	}
};

#endif /* SAKURA_CONTAINER_82819006_7BEE_4D84_82A0_B61B0E0BAFD79_H_ */
/*[EOF]*/