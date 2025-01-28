# VM SETUP
07-10-24

---

## Content Overview
1. Importing Downloaded Virtual Machine (VM) Images.
2. Creating Virtual Machines.
3. Post-Installation Tasks.

---

## Importing Downloaded Images
1. **Install VirtualBox**:
   - Download from the [VirtualBox website](https://www.virtualbox.org/).
   - Ensure you have the correct VirtualBox image for your VM (links on Moodle).

2. **Import the VM**:
   - Open VirtualBox → Select **Import**.
   - Specify the location of the `.ova` file.
   - Configure virtual hardware (processors, memory, network adapters) as needed.
   - Click **Import** (this process may take several minutes).

3. **Create a Snapshot** (Recommended):
   - Navigate to `Machine > Tools > Snapshots`.
   - Name and describe the snapshot.
   - Snapshots allow reverting to a previous state in case of issues.
   - **Note**: Restoring a snapshot will delete all changes made after it was taken.

4. **Start the VM**:
   - Power on the VM to boot into the imported operating system.
   - Additional configuration (memory, CPU, shared folders, network adapters) can be made via `Machine > Settings`.

---

## Creating Virtual Machines
1. **Download ISO File**:
   - Obtain the installation ISO for the desired OS (e.g., Kali Linux).
   
2. **Create a New VM**:
   - Click **New** in VirtualBox.
   - Specify a name and OS type.

3. **Allocate Memory**:
   - Assign at least **4096MB (4GB)** for optimal performance.

4. **Create Virtual Hard Disk**:
   - Select **Create a virtual hard disk** → Choose **Dynamically allocated**.
   - Specify size (e.g., **16GB**) and location.

5. **Boot from ISO**:
   - Attach the ISO file to the VM by configuring the DVD drive properties.

6. **Install the OS**:
   - Boot the VM → Choose installation options (e.g., Graphical Install for Kali).
   - Follow prompts:
     - Select language, region, and keyboard layout.
     - Set hostname and user credentials (`Username: cyber`, `Password: cyberp4ss`).
     - Choose partitioning type (`Guided – use entire disk`).
     - Install desktop environment (`GNOME` recommended).

7. **Finalize Installation**:
   - Install GRUB bootloader → Complete the setup → Reboot the VM.

---

## Post-Installation Tasks
1. **Update the System**:
   - Open a terminal and run:
     - `sudo apt-get update`
     - `sudo apt-get upgrade` (confirm with `Y` when prompted).

2. **Verify Configuration**:
   - Ensure the VM is functioning correctly by logging in and accessing the desktop environment.

---

## Key Notes on Virtual Machines
- **Snapshots**:
  - Create snapshots for disaster recovery.
  - Restoring a snapshot erases all changes made since its creation.
- **Virtual Machine Types**:
  - Pre-configured images simplify setup.
  - Custom VMs provide flexibility but require manual installation.

---

## Troubleshooting
- If issues arise, pre-configured VM images are available on Moodle.
- Login credentials for Moodle images:  
  - `Username: cyber`  
  - `Password: cyberp4ss`.