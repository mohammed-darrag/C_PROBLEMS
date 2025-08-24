#include <stdio.h>
#include <math.h>
#include <string.h>

#define STEPS 2000                      // Total number of time steps
#define M_PI 3.141                      // Define pi
#define DT 0.01                         // Default time step size

// Function to simulate the spring-mass-damper system
void simulate(double m, double d, double k, double dt, const char *filename)
{
    double x[STEPS];       // Array to store displacement over time
    double t[STEPS];       // Array to store time values
    double F_in[STEPS];    // Array to store external force values

    // Initial conditions
    x[0] = 0.0;            // Starting displacement = 0
    x[1] = 0.01;           // Small initial movement to start the system
    t[0] = 0.0;            // Time starts at 0

    // Generate time values and input force (sine wave)
    for (int i = 0; i < STEPS; i++)
    {
        t[i] = i * dt;                                      // Calculate time for each step
        F_in[i] = 5 * sin(2 * M_PI * 0.5 * t[i]);           // Sinusoidal force: amplitude = 5N, frequency = 0.5 Hz  A sin (2_pi_f_T)
    }

    // Main simulation loop using the difference equation
    for (int n = 1; n < STEPS - 1; n++)
    {
        x[n + 1] = (1.0 / m) * (
                       dt * dt * F_in[n]                   // Force term
                       - d * dt * (x[n] - x[n - 1])          // Damping term
                       - k * dt * dt * x[n]                  // Spring term
                   ) + 2 * x[n] - x[n - 1];                // Combine with previous displacements
    }

    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error writing to file: %s\n", filename);
        return;
    }
    fprintf(fp, "Time (s),Displacement (m)\n");

    // Write simulation data to file
    for (int i = 0; i < STEPS; i++)
    {
        fprintf(fp, "%.6f,%.6f\n", t[i], x[i]);            // Print time and displacement
    }

    fclose(fp);  // Close the file
    printf("Simulation complete: %s\n", filename);  // Confirm success
}

// Main function: runs multiple simulations funcation with different parameters
int main()
{
    // Base system parameters
    double m = 1.0;    // Mass in kg
    double d = 0.5;    // Damping coefficient in kg/s
    double k = 10.0;   // Spring stiffness in N/m

    // Run simulations by changing one parameter at a time

    // Base case
    simulate(m, d, k, DT, "output_base.csv");

    // Varying mass
    simulate(0.1, d, k, DT, "output_m_0.1.csv");
    simulate(5.0, d, k, DT, "output_m_5.csv");

    // Varying damping
    simulate(m, 0.1, k, DT, "output_d_0.1.csv");
    simulate(m, 10.0, k, DT, "output_d_10.csv");

    // Varying spring constant
    simulate(m, d, 5.0, DT, "output_k_5.csv");
    simulate(m, d, 15.0, DT, "output_k_15.csv");

    // Varying time step (dt) to show when simulation becomes unstable
    simulate(m, d, k, 0.1, "output_dt_0.1.csv");
    simulate(m, d, k, 1.0, "output_dt_1.0.csv");

    return 0;
}