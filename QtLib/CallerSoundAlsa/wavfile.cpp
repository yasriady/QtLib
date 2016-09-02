#include "wavfile.h"

WavFile::WavFile(char *fileName)
{
    m_fileName = fileName;
    FILE *fpoint;
    //fpoint = fopen ("/satu.wav", "rb");
    fpoint = fopen ( fileName, "rb" );
    RIFF_header *wave_file; wave_file = new RIFF_header;
    fread ((void*)wave_file, sizeof (RIFF_header), (size_t)1, fpoint);

    wave_file->SubSize_2 = SWAPPED_UL(wave_file->SubSize_2); // I think it's big-endianess so we have to swap byte

//    cout << "Size of file:      " << getFileSize(fpoint) << endl;
//    cout << "Header:            " << wave_file->ID[0]
//                      << wave_file->ID[1]
//                      << wave_file->ID[2]
//                      << wave_file->ID[3] << endl;

//    cout << "Format:            " << wave_file->Format[0]
//                      << wave_file->Format[1]
//                      << wave_file->Format[2]
//                      << wave_file->Format[3] << endl;

//    cout << "Sub-chunk1 ID:         " << wave_file->SubID_1[0]
//                          << wave_file->SubID_1[1]
//                      << wave_file->SubID_1[2]
//                      << wave_file->SubID_1[3] << endl;

//    cout << "Sub-chunk1 Size:   " << wave_file->SubSize_1 << endl;

//    cout << "Audio Format:      " << wave_file->AudioFmt << endl;

//    cout << "Channel:       " << wave_file->Channel << endl;

//    cout << "Sample Rate:       " << wave_file->Frequency << endl;

//    cout << "Byte Rate:         " << wave_file->bytesRate << endl;

//    cout << "BlockAlign:        " << wave_file->BlockAlign << endl;

//    cout << "Bits per sample:   " << wave_file->BitsPerSample << endl;

//    cout << "Sub-chunk2 ID:         " << wave_file->SubID_2[0]
//                      << wave_file->SubID_2[1]
//                      << wave_file->SubID_2[2]
//                      << wave_file->SubID_2[3] << endl;
//    cout << "Sub-chunk2 Size:   " << wave_file->SubSize_2 << endl;

    //    cout << "Sample Rate:       " << wave_file->Frequency << endl;

    //    cout << "Byte Rate:         " << wave_file->bytesRate << endl;

    m_fileSize = getFileSize_( fpoint );

    m_sampleRate = wave_file->Frequency;
    m_byteRate = wave_file->bytesRate;
    m_channels = wave_file->Channel;
    m_format = wave_file->AudioFmt;

}

WavFile::~WavFile()
{

}

unsigned int WavFile::getSampleRate() const
{
    return m_sampleRate;
}

unsigned int WavFile::getByteRate() const
{
    return m_byteRate;
}

int WavFile::getChannels() const
{
    return m_channels;
}

int WavFile::getFormat() const
{
    return m_format;
}

int WavFile::getFileSize() const
{
    return m_fileSize;
}

char *WavFile::getFileName() const
{
    return m_fileName;
}

int WavFile::getFileSize_(FILE *inFile)
{
    int fileSize = 0;
    fseek(inFile,0,SEEK_END);
    fileSize=ftell(inFile);
    fseek(inFile,0,SEEK_SET);
    return fileSize;
}

