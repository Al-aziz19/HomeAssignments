#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    std::string input_file = "input.bin";
    std::string output_file = "output.bin";

    std::size_t file_size = std::filesystem::file_size(input_file);

    char* buffer = new char[file_size];

    std::ifstream infile(input_file, std::ios::binary);
    std::ofstream outfile(output_file, std::ios::binary);

    infile.read(buffer, file_size);

    for (std::size_t i = 0; i < file_size / 2; ++i) {
        std::swap(buffer[i],buffer[file_size - i - 1]);
    }

    outfile.write(buffer, file_size);

    delete[] buffer;

    infile.close();
    outfile.close();
     return 0;
}