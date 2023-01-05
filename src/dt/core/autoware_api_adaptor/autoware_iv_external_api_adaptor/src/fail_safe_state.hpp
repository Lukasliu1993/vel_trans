// Copyright 2021 Tier IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FAIL_SAFE_STATE_HPP_
#define FAIL_SAFE_STATE_HPP_

#include "rclcpp/rclcpp.hpp"
#include "autoware_api_utils/autoware_api_utils.hpp"
#include "autoware_external_api_msgs/msg/fail_safe_state_stamped.hpp"
#include "autoware_system_msgs/msg/emergency_state_stamped.hpp"

namespace external_api
{

class FailSafeState : public rclcpp::Node
{
public:
  explicit FailSafeState(const rclcpp::NodeOptions & options);

private:
  rclcpp::Publisher<autoware_external_api_msgs::msg::FailSafeStateStamped>::SharedPtr pub_state_;
  rclcpp::Subscription<autoware_system_msgs::msg::EmergencyStateStamped>::SharedPtr sub_state_;
};

}  // namespace external_api

#endif  // FAIL_SAFE_STATE_HPP_