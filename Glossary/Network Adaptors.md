A hardware component that connects to a device, such as a computer or server, a network enabling communication with other devices.


### Bridged Adaptor
A bridged connection allows devices to connect directly to the external network.

Bridged network adaptors on [[Virtual Machines]] allow it to connect to an outside network. The VM is assigned a unique IP address on the same network as the host.

### NAT adaptors
Hides internal IP addresses from the external network. Outgoing traffic appears to come from a single IP address and incoming connections are typically blocked.

In a [[Virtual Machines|virtual machine]], the NAT engine receives the network frames from the VM, extracts the [[TCP]]/IP data from it and resends it using the hosts IP address.

### Host-only
A virtual network interface that creates a private network between the host machine and the VM.
