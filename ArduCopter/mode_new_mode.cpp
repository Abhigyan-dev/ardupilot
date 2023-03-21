// My custom flight mode
#include <bits/stdc++.h>
#include "Copter.h"
/*
 * Init and run calls for 'new mode' flight mode
 */

// stabilize_run - runs the main stabilize controller
// should be called at 100hz or more
void ModeNewMode::run()
{
    std::cout<<"In new mode now, horray !!"<<std::endl;
}
