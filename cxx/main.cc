
#include <nix.hpp>

#include <iostream>

int
main(int argc, char **argv)
{

  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <FILE>" << std::endl;
    return EXIT_FAILURE;
  }

  nix::File nf = nix::File::open(argv[1], nix::FileMode::ReadOnly);

  for (const nix::Block &b : nf.blocks()) {
    std::cout << "B " << b.id() << " " << b.name() << std::endl;
  }

  return EXIT_SUCCESS;
}
