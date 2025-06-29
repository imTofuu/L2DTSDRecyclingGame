#pragma once

#include "VertexBuffer.h"

namespace EcoSort {

    class VertexArray {
    public:

        VertexArray();
        ~VertexArray();

        void bind();

        void setBuffer(unsigned int index, VertexBuffer& vbo, DataType type, DataElements elements);

    private:

        unsigned int m_handle;
            
    };
    
}