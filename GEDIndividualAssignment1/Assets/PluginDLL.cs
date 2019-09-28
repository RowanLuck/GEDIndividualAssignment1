using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class PluginDLL : MonoBehaviour
{
    const string DLL_NAME = "IndivAssignment1";

    [DllImport(DLL_NAME)]
    private static extern int SimpleFunction();

    [DllImport(DLL_NAME)]
    private static extern void savePosition(float x, float z);

    [DllImport(DLL_NAME)]
    private static extern int loadPosition(float positionX, float positionZ);

    void Update()

    {
        if (Input.GetKeyDown(KeyCode.S))
        {
            Debug.Log(SimpleFunction());
        }


        if (Input.GetKeyDown(KeyCode.X))
        {
            savePosition(transform.position.x, transform.position.z);
        }

    }
}