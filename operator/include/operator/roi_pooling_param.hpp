/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2018, Open AI Lab
 * Author: chunyinglv@openailab.com
 */
#ifndef __ROIPOOLING_PARAM_HPP__
#define __ROIPOOLING_PARAM_HPP__


#include "parameter.hpp"

namespace TEngine {


struct ROIPoolingParam {

    int pooled_h;
    int pooled_w;
    float spatial_scale;

    DECLARE_PARSER_STRUCTURE(ROIPoolingParam) 
    {
       DECLARE_PARSER_ENTRY(spatial_scale);
    };

};


} //namespace TEngine


#endif
