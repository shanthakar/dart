/*
 * Copyright (c) 2016, Graphics Lab, Georgia Tech Research Corporation
 * Copyright (c) 2016, Humanoid Lab, Georgia Tech Research Corporation
 * Copyright (c) 2016, Personal Robotics Lab, Carnegie Mellon University
 * All rights reserved.
 *
 * This file is provided under the following "BSD-style" License:
 *   Redistribution and use in source and binary forms, with or
 *   without modification, are permitted provided that the following
 *   conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *   CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *   MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 *   USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *   AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *   POSSIBILITY OF SUCH DAMAGE.
 */

#include "dart/math/Ray.hpp"

namespace dart {
namespace math {

//==============================================================================
Ray::Ray(const Eigen::Vector3d& from, const Eigen::Vector3d& to, double fraction)
  : from(from), to(to), fraction(fraction)
{
  // Do nothing
}

//==============================================================================
Ray::Ray(const Ray& ray)
  : from(ray.from), to(ray.to), fraction(ray.fraction)
{
  // Do nothing
}

//==============================================================================
Ray::Ray(Ray&& ray)
  : from(std::move(ray.from)), to(std::move(ray.to)),
    fraction(std::move(ray.fraction))
{
  // Do nothing
}

//==============================================================================
Ray& Ray::operator=(const Ray& ray)
{
  if (&ray != this)
  {
    from = ray.from;
    to = ray.to;
    fraction = ray.fraction;
  }

  return *this;
}

//==============================================================================
Ray& Ray::operator=(Ray&& ray)
{
  if (&ray != this)
  {
    from = std::move(ray.from);
    to = std::move(ray.to);
    fraction = std::move(ray.fraction);
  }

  return *this;
}

}  // namespace math
}  // namespace dart