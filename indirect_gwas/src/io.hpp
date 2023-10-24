#pragma once

#include "utils.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>

LabeledMatrix read_input_matrix(std::string filename);
LabeledVector read_input_vector(std::string filename);
unsigned int count_lines(std::string filename);