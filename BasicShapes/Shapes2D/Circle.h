#pragma once
/**
@file Circle.h
@author nieznanysprawiciel
@copyright File is part of Sleeping Wombat Libraries.
*/


#include "swCommonLib/Common/TypesDefinitions.h"
#include "swGeometrics/GeometricsCore/Types/Accessors/DefaultAccessors.h"


namespace sw {
namespace geom
{


/**@brief Cricle generator.
@ingroup Shapes2D*/
template< typename VertexType, typename IndexType, typename PositionAcc = DefaultPositionAcc< VertexType > >
class Circle
{
private:
public:

	float				Radius;
	uint32				Tesselation;

public:

	inline explicit		Circle					();


	inline void			GenerateVertex			( VertexType& vertex, Size vertexIdx );
	
	template< class IndexBuffer >
	inline void			GenerateIndexBuffer		( IndexBuffer& idxBuffer, Size startIdx );

	inline Size			GetNumberVerticies		() const;
	inline Size			GetNumberIndicies		() const;

private:

	template< class IndexBuffer >
	inline void			AddTriangle				( IndexBuffer& idxBuffer, IndexType startIdx, IndexType vertIdx1, IndexType vertIdx2, IndexType vertIdx3 );

public:

	typedef VertexType VertexFormat;
	typedef IndexType IndexFormat;
};





}	// geom
}	// sw


#include "Circle.inl"
