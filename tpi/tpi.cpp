<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="tpi" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin/Debug/tpi" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Debug/" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-g" />
				</Compiler>
			</Target>
			<Target title="Release">
				<Option output="bin/Release/tpi" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Release/" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-O2" />
				</Compiler>
				<Linker>
					<Add option="-s" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option="-Wall" />
			<Add option="-fexceptions" />
		</Compiler>
		<Unit filename="lista.cpp" />
		<Unit filename="lista.h" />
		<Unit filename="main.cpp" />
		<Unit filename="sucursal.cpp" />
		<Unit filename="sucursal.h" />
		<Extensions>
			<lib_finder disable_auto="1" />
			<code_completion />
			<envvars />
			<debugger />
		</Extensions>
	</Project>
</CodeBlocks_project_file>