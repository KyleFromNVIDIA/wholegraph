/*
 * Copyright (c) 2019-2023, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "logger.hpp"

#include <cstdio>
#include <memory>
#include <string>

namespace wholememory {

int& get_log_level()
{
  static int log_level = LEVEL_INFO;
  return log_level;
}

void set_log_level(int lev) { get_log_level() = lev; }

bool will_log_for(int lev) { return lev <= get_log_level(); }

}  // namespace wholememory
