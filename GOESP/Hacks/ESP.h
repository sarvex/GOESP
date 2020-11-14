#pragma once

#include "../ConfigStructs.h"

namespace ESP
{
    void render() noexcept;
    void drawGUI() noexcept;
    json toJSON() noexcept;
    void fromJSON(const json& j) noexcept;
}
