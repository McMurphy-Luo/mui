#ifndef MUI_RENDER_DIRECT2D_RECTANGLE_H_
#define MUI_RENDER_DIRECT2D_RECTANGLE_H_

#include "../../config.h"
#include "../Rectangle.h"

NAMESPACE_BEGIN

class D2DRectangleRender : public IRectangleRender {
public:
    D2DRectangleRender : IRectangleRender() {

    }

    void Render() override;


private:

};

NAMESPACE_END



#endlf // MUI_RENDER_DIRECT2D_RECTANGLE_H_