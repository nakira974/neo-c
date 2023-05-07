#include <comelang.h>
#include <signal.h>

void set_signal()
{
    struct sigaction sa;
    

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
/*
    sigaction(SIGWINCH, &sa, NULL!);

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTOU, &sa, NULL!).except {
        perror("sigaction5");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTIN, &sa, NULL!).except {
        perror("sigaction6");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGQUIT, &sa, NULL!).except {
        perror("sigaction8");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGPIPE, &sa, NULL!).except {
        perror("sigaction10");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = (sig_t)sig_int;
    if(sigaction(SIGINT, &sa, null!) < 0) {
        perror("sigaction2");
        exit(1);
    }
*/
}

int main(int argc, char** argv)
{
    
    return 0;
}

