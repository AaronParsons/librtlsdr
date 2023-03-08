#ifndef __I2C_H
#define __I2C_H

uint32_t rtlsdr_get_tuner_clock(void *dev);

/*!
 * Write bytes to the I2C addressable part of the device.
 *
 * \param dev the device handle given by rtlsdr_open()
 * \param addr the I2C address to write to.
 * \param buf the pointer to data bytes to be written.
 * \param len the number of data bytes to be written.
 * \return the number of bytes written, or negative in case of error.
 */
int rtlsdr_i2c_write_fn(void *dev, uint8_t addr, uint8_t *buf, int len);

/*!
 * Read bytes from the I2C addressable part of the device.
 *
 * \param dev the device handle given by rtlsdr_open()
 * \param addr the I2C address to write to.
 * \param buf the pointer to the bytes read buffer.
 * \param len the length of the read buffer = max read length.
 * \return the number of bytes read into the buffer, or negative in case of error.
 */
int rtlsdr_i2c_read_fn(void *dev, uint8_t addr, uint8_t *buf, int len);

#endif
