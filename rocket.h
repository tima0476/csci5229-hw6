#ifndef __rocket_h__
#define __rocket_h__	// Prevent double instantiation

#define MIN(a,b)  ((a) < (b) ? (a) : (b))
#define MAX(a,b)  ((a) > (b) ? (a) : (b))

// Data structure containing a single point in 2d space
typedef struct duopoint {
	double r;
	double z;
} duopoint;
typedef struct duopoint *dpp;

/*
 * Draw vertex in cylindrical coordinates (r, theta, z)
 */
void cylVertex(double r, double th, double z);

/*
 * Draw normal in cylindrical coordinates (r, theta, z)
 */
void cylNormal(double r, double th, double z);

/*
 * Draw a radially symmetric solid
 *
 *    profile: pointer to an array of x,y coordinates representing the surface profile of the solid
 *    size: The number of points in the profile array
 *    bz,by,bz: 3D coordinates of the base of the solid
 *    rx,ry,rz: 3D vector for rotation of the solid.
 *    ph:  Angle to rotate the solid around (rx,ry,rz)
 *    s: the scale of the solid
 *    d: The angular increment for each slice of the radially symmetric solid
 *    tex: The texture to apply
 */
void lathe(dpp profile, int size, double bx, double by, double bz, double rx, double ry, double rz, double ph, double s, double d, unsigned int tex);

/*
 * Draw rocket fins equidistant around the rotation
 *
 *    bz,by,bz: 3D coordinates of the base of the rocket
 *    rx,ry,rz: 3D vector for rotation of the rocket.
 *    ph:  Angle to rotate the rocket
 *    s: the scale of the rocket
 *    fc: the number of fins on the rocket
 *    tex: the texture to apply
 */
void draw_fins(double bx, double by, double bz, double rx, double ry, double rz, double ph, double s, int fc, unsigned int tex);

/*
 * Draw a cartoon rocket ship
 *
 *    bz,by,bz: 3D coordinates of the base of the rocket
 *    rx,ry,rz: 3D vector for rotation of the rocket.
 *    ph:  Angle to rotate the rocket
 *    s: the scale of the rocket
 *    fc: how many fins the rocket gets
 *	  d: The angular increment for each slice of the rocket
 *    tex: The texture to apply
 *    fintex: The texture for the fins
 */
void rocket(double bx, double by, double bz, double rx, double ry, double rz, double ph, double s, int fc, double d, unsigned int tex, unsigned int fintex);

#endif // __rocket_h__