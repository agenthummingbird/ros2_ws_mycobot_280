#include <rclcpp/rclcpp.hpp>
#include <moveit/planning_scene/planning_scene.h>
#include <moveit/task_constructor/task.h>
#include <moveit/task_constructor/container.h>
#include <moveit/task_constructor/solvers/pipeline_planner.h>
#include <moveit/task_constructor/stages/connect.h>
#include <moveit/task_constructor/stages/fixed_state.h>
#include <moveit/task_constructor/cost_terms.h>
#include <iostream>

using namespace moveit::task_constructor;
 
/**
 * @brief Main function to demonstrate alternative path costs.
 *
 * This function sets up a ROS 2 node, creates a Task Constructor task,
 * and demonstrates different path planning strategies using various cost terms.
 * FixedState (Generator Stage) - Connect (Connector Stage) - FixedState (Generator Stage)
 *
 * @param argc Number of command-line arguments
 * @param argv Array of command-line arguments
 * @return int Exit status
 */

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  printf("hello world mycobot_mtc_demos package\n");
  return 0;
}
