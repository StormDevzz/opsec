#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <cstdlib>

std::ostream& progress(const std::string& label, int ms) {
    std::cout << "  " << label << " ... " << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
    std::cout << "ok" << std::endl;
    return std::cout;
}

int main() {
    std::string user = std::getenv("USER") ? std::getenv("USER") : "anon";

    std::cout << "[sudo] password for " << user << ": " << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(900));
    std::cout << "(lol nice try, dipshit)" << std::endl;
    std::cout << std::endl;

    std::cout << "[sudo] rm -rf /" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    std::cout << "who the fuck let you touch this machine" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));

    progress("removing /etc/fstab", 250);
    progress("removing /etc/passwd", 200);
    progress("removing /bin, /sbin, /lib", 350);
    progress("removing /boot/vmlinuz-linux", 300);
    progress("removing /usr", 400);
    progress("removing /var/log", 180);
    progress("removing /root/.ssh", 160);
    progress("removing /home/" + user, 200);
    progress("wiping /dev/sda with urandom", 1200);

    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    std::cout << "are you fucking kidding me" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "you just watched your entire system \"die\"" << std::endl;
    std::cout << "and literally nothing happened." << std::endl;
    std::cout << std::endl;

    std::cout << "moral: don't run shit from aur without reading the pkgbuild." << std::endl;
    std::cout << "sorry for the language but you had it coming. ily <3" << std::endl;

    return 0;
}
