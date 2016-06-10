#ifndef MEASUREMENT_MARKER_H
#define MEASUREMENT_MARKER_H

#include <vector>
#include <tuw_geometry/pose2d.h>
#include <tuw_geometry/measurement.h>

namespace tuw {

class MeasurementMarker;  /// Prototype
using MeasurementMarkerPtr =  std::shared_ptr< MeasurementMarker >;
using MeasurementMarkerConstPtr = std::shared_ptr< MeasurementMarker const >; 

/**
 * class to represent marker measurements
 **/
class MeasurementMarker : public Measurement{
public:
    /**
    * class to represent a single marker with redundant information
    **/
    struct Marker {
        int id;

        double length;
        double angle;
        double orientation;
        Pose2D pose;
    };
    /**
     * constructor
     * @param distinguish extended classes in base versions
     **/
    MeasurementMarker();
    /**
     * copy constructor
     * @param o source
     **/
    MeasurementMarker(const MeasurementMarker &o);
    /**
     * resizes the vector holding the marker measurements
     * @param size
     **/
    void resize ( size_t n );
    /**
     * returns the min angle measurement
     * @return possible min measurement
     **/
    double &angle_min();
    /**
     * returns the min angle measurement
     * @return possible min measurement
     **/
    const double &angle_min() const;
    /**
     * returns the max angle measurement
     * @return possible max measurement
     **/
    double &angle_max();
    /**
     * returns the max angle measurement
     * @return possible max measurement
     **/
    const double &angle_max() const;
    /**
     * returns the min range measurement
     * @return possible min measurement
     **/
    double &range_min();
    /**
     * returns the min range measurement
     * @return possible min measurement
     **/
    const double &range_min() const;
    /**
     * returns the max range measurement
     * @return possible max measurement
     **/
    double &range_max();
    /**
     * returns the max range measurement
     * @return possible max measurement
     **/
    const double &range_max() const;
    /**
     * returns the max id range measurement
     * @return possible max id measurement
     **/
    double &range_max_id();
    /**
     * returns the max id range measurement
     * @return possible max id measurement
     **/
    const double &range_max_id() const;
    /**
     * returns the radial standard deviation of the measurement
     * @return radial standard deviation
     **/
    double &sigma_radial();
    /**
     * returns the radial standard deviation of the measurement
     * @return radial standard deviation
     **/
    const double &sigma_radial() const;
    /**
     * returns the polar standard deviation of the measurement
     * @return polar standard deviation
     **/
    double &sigma_polar();
    /**
     * returns the polar standard deviation of the measurement
     * @return polar standard deviation
     **/
    const double &sigma_polar() const;
    /**
     * returns the azimuthal standard deviation of the measurement
     * @return azimuthal standard deviation
     **/
    double &sigma_azimuthal();
    /**
     * returns the azimuthal standard deviation of the measurement
     * @return azimuthal standard deviation
     **/
    const double &sigma_azimuthal() const;
    /**
     * returns the roll standard deviation of the measurement
     * @return roll standard deviation
     **/
    double &sigma_roll();
    /**
     * returns the roll standard deviation of the measurement
     * @return roll standard deviation
     **/
    const double &sigma_roll() const;
    /**
     * returns the pitch standard deviation of the measurement
     * @return pitch standard deviation
     **/
    double &sigma_pitch();
    /**
     * returns the pitch standard deviation of the measurement
     * @return pitch standard deviation
     **/
    const double &sigma_pitch() const;
    /**
     * returns the yaw standard deviation of the measurement
     * @return yaw standard deviation
     **/
    double &sigma_yaw();
    /**
     * returns the yaw standard deviation of the measurement
     * @return yaw standard deviation
     **/
    const double &sigma_yaw() const;
    /**
     * @return true on empty
     **/
    bool empty() const;
    /**
     * @return number of markers
     **/
    size_t size() const;
    /**
     * @param i idx
     * @return a single marker
     **/
    Marker& operator[] ( int i );
    /**
     * @param i idx
     * @return a single marker
     **/
    const Marker& operator[] ( int i ) const;
private:
    double angle_min_;
    double angle_max_;

    double range_max_;
    double range_min_;
    double range_max_id_;
    
    double sigma_radial_;
    double sigma_polar_;
    double sigma_azimuthal_;
    
    double sigma_roll_;
    double sigma_pitch_;
    double sigma_yaw_;

    std::vector<Marker> markers_;
};
};

#endif 
