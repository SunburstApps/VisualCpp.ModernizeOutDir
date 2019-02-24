extern void SayHello(const char* toWhom);
int main(int argc, const char* argv[]) {
    if (argc == 1) SayHello(nullptr);
    else SayHello(argv[1]);

    return 0;
}
