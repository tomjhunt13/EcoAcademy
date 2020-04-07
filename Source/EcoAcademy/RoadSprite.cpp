// Fill out your copyright notice in the Description page of Project Settings.


#include "RoadSprite.h"



void URoadSprite::SetTexture(UTexture2D* texture)
{
//    this->BakedSourceDimension = {Cast<float>(texture->GetSizeX()), texture->GetSizeY()};
    this->BakedSourceTexture = texture;
};

void URoadSprite::SetVertices(TArray<FVector2D> vertices)
{
    // Shape
    FSpriteGeometryShape quad;
    quad.ShapeType = ESpriteShapeType::Polygon;
    quad.Vertices = vertices;
    TArray<FSpriteGeometryShape> shapes = {quad};

    this->RenderGeometry.Shapes = shapes;
    this->RenderGeometry.GeometryType = ESpritePolygonMode::Type::FullyCustom;

};

