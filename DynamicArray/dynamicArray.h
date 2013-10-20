#ifndef _DYNAMICARRAY_H
#define _DYNAMICARRAY_H

class DynamicArray 
{
public:
	DynamicArray( int aSize = 10 );
	~DynamicArray();
	DynamicArray( const DynamicArray &aRef );
	void assign( const DynamicArray &aRef );
	void append( int aValue );
	bool remove( int aIndex);
	bool insert( int aIndex, int aValue );
	bool remove( int aIndex, int aValue );
	const int *begin() const;
	const int *end() const;
	(const int aIndex) const;
private:
	int *m_array;
	int m_arrayLength;
};

#endif
