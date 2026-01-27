*This project has been created as part of the 42 curriculum by aelsafi*

# born2beroot

## Description

**born2beroot** is a system administration and security project focused on setting up a secure Linux server from scratch. The goal is to configure a virtual machine according to strict rules, applying best practices in system hardening, user management, and service configuration.

This project introduces fundamental concepts such as:

* Linux system administration
* Virtualization
* User and group management
* Password and authentication policies
* Firewall configuration and SSH security
* Monitoring and automation

The objective is not just to make the system work, but to understand *why* each security choice is made.

## Instructions

### Environment Setup

* Create a **virtual machine** using either **Debian** or **Rocky Linux**, as required by the subject
* The VM must run in **headless mode**
* No graphical interface is allowed
* The system must follow all partitioning, hostname, and package constraints defined in the subject

### User and Password Policy

The system must enforce strict security rules:

* Strong password policy (expiration, minimum length, complexity)
* `sudo` configured with limited retries and logging
* No direct root SSH login
* Proper user and group permissions

### Services and Security

* SSH must run on the required port
* A firewall must be active and allow only necessary services
* Unused services must be disabled
* The system must remain stable after reboot

### Monitoring Script

A monitoring script (`monitoring.sh`) must:

* Run automatically every 10 minutes using `cron`
* Display system information such as:

  * OS and kernel version
  * CPU and memory usage
  * Disk usage
  * Active connections
  * Logged-in users
  * Network information

The script output must follow the exact format specified in the subject.

## System Design and Justification

### Operating System Choice

Debian/Rocky Linux is chosen for its stability, long-term support, and widespread use in server environments.

### Security Configuration

* **UFW / firewalld** limits exposed services
* **SSH hardening** reduces attack surface
* **Password policies** mitigate brute-force risks
* **Sudo restrictions** prevent privilege abuse

Each configuration decision is justified by real-world security principles.

### Automation

Using `cron` ensures that monitoring is reliable, automatic, and does not depend on user interaction.

## Validation

During evaluation, you must be able to:

* Explain every configuration choice
* Demonstrate all security rules live
* Reboot the machine without issues
* Show that services and scripts persist correctly

## Resources

### Technical References

* Debian / Rocky Linux official documentation
* `man sudo`, `man sshd_config`, `man crontab`
* Linux Filesystem Hierarchy Standard (FHS)
* 42 Subject PDF – *born2beroot*

### AI Usage Disclosure

AI tools were used **only as a learning and clarification aid**, specifically for:

* Understanding Linux security concepts
* Reviewing configuration logic and system administration theory

All system setup, commands, scripts, and configuration files were created, tested, and fully understood by the student.

---

This project is about control and discipline: if you cannot explain it, you do not own it.
