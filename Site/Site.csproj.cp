﻿<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" DefaultTargets="Build" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <Import Project="$(MSBuildExtensionsPath)\$(MSBuildToolsVersion)\Microsoft.Common.props" Condition="Exists('$(MSBuildExtensionsPath)\$(MSBuildToolsVersion)\Microsoft.Common.props')" />
  <PropertyGroup>
    <Configuration Condition=" '$(Configuration)' == '' ">Debug</Configuration>
    <Platform Condition=" '$(Platform)' == '' ">AnyCPU</Platform>
    <ProductVersion>
    </ProductVersion>
    <SchemaVersion>2.0</SchemaVersion>
    <ProjectGuid>{5575A31C-74BC-4589-A02A-C40B5EF3FBC0}</ProjectGuid>
    <ProjectTypeGuids>{349c5851-65df-11da-9384-00065b846f21};{fae04ec0-301f-11d3-bf4b-00c04f79efbc}</ProjectTypeGuids>
    <OutputType>Library</OutputType>
    <AppDesignerFolder>Properties</AppDesignerFolder>
    <RootNamespace>Site</RootNamespace>
    <AssemblyName>Site</AssemblyName>
    <TargetFrameworkVersion>v4.5</TargetFrameworkVersion>
    <UseIISExpress>true</UseIISExpress>
    <IISExpressSSLPort />
    <IISExpressAnonymousAuthentication />
    <IISExpressWindowsAuthentication />
    <IISExpressUseClassicPipelineMode />
  </PropertyGroup>
  <PropertyGroup Condition=" '$(Configuration)|$(Platform)' == 'Debug|AnyCPU' ">
    <DebugSymbols>true</DebugSymbols>
    <DebugType>full</DebugType>
    <Optimize>false</Optimize>
    <OutputPath>bin\</OutputPath>
    <DefineConstants>DEBUG;TRACE</DefineConstants>
    <ErrorReport>prompt</ErrorReport>
    <WarningLevel>4</WarningLevel>
  </PropertyGroup>
  <PropertyGroup Condition=" '$(Configuration)|$(Platform)' == 'Release|AnyCPU' ">
    <DebugType>pdbonly</DebugType>
    <Optimize>true</Optimize>
    <OutputPath>bin\</OutputPath>
    <DefineConstants>TRACE</DefineConstants>
    <ErrorReport>prompt</ErrorReport>
    <WarningLevel>4</WarningLevel>
  </PropertyGroup>
  <ItemGroup>
    <Reference Include="Campus.SDK, Version=0.1.8.20243, Culture=neutral, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\campus.sdk.0.1.9.78\lib\portable-net45+sl5+wp8+win8\Campus.SDK.dll</HintPath>
    </Reference>
    <Reference Include="Microsoft.CSharp" />
    <Reference Include="Microsoft.Threading.Tasks, Version=1.0.12.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\Microsoft.Bcl.Async.1.0.165\lib\net45\Microsoft.Threading.Tasks.dll</HintPath>
    </Reference>
    <Reference Include="Microsoft.Threading.Tasks.Extensions, Version=1.0.12.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\Microsoft.Bcl.Async.1.0.165\lib\net45\Microsoft.Threading.Tasks.Extensions.dll</HintPath>
    </Reference>
    <Reference Include="Newtonsoft.Json, Version=6.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\Newtonsoft.Json.6.0.1\lib\net45\Newtonsoft.Json.dll</HintPath>
    </Reference>
    <Reference Include="System.Net" />
    <Reference Include="System.Net.Http" />
    <Reference Include="System.Net.Http.Extensions, Version=2.2.18.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\Microsoft.Net.Http.2.2.18\lib\net45\System.Net.Http.Extensions.dll</HintPath>
    </Reference>
    <Reference Include="System.Net.Http.Primitives, Version=4.2.18.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\Microsoft.Net.Http.2.2.18\lib\net45\System.Net.Http.Primitives.dll</HintPath>
    </Reference>
    <Reference Include="System.Net.Http.WebRequest" />
    <Reference Include="System.Web.DynamicData" />
    <Reference Include="System.Web.Entity" />
    <Reference Include="System.Web.ApplicationServices" />
    <Reference Include="System.ComponentModel.DataAnnotations" />
    <Reference Include="System" />
    <Reference Include="System.Data" />
    <Reference Include="System.Core" />
    <Reference Include="System.Data.DataSetExtensions" />
    <Reference Include="System.Web.Extensions" />
    <Reference Include="System.Xml.Linq" />
    <Reference Include="System.Drawing" />
    <Reference Include="System.Web" />
    <Reference Include="System.Xml" />
    <Reference Include="System.Configuration" />
    <Reference Include="System.Web.Services" />
    <Reference Include="System.EnterpriseServices" />
    <Reference Include="X.PagedList, Version=1.20.1.21688, Culture=neutral, PublicKeyToken=abbb863e9397c5e1, processorArchitecture=MSIL">
      <SpecificVersion>False</SpecificVersion>
      <HintPath>..\packages\X.PagedList.1.20.2.37\lib\portable-net4+sl5+wp8+win8\X.PagedList.dll</HintPath>
    </Reference>
  </ItemGroup>
  <ItemGroup>
    <Content Include="Authentication\Authentication.aspx" />
    <Content Include="Authentication\Bulletins\AllBulletins.aspx" />
    <Content Include="Authentication\Messages\Messages.aspx" />
    <Content Include="Authentication\Messages\NewMessage.aspx" />
    <Content Include="Content\bootstrap-chosen.css" />
    <Content Include="Content\Bulletins.css" />
    <Content Include="Authentication\Bulletins\MyBulletins.aspx" />
    <Content Include="Authentication\Messages\AllDialogs.aspx" />
    <Content Include="Authentication\Profile.aspx" />
    <Content Include="Content\Authentication.css" />
    <Content Include="Content\bootstrap-theme.css" />
    <Content Include="Content\bootstrap-theme.min.css" />
    <Content Include="Content\bootstrap.css" />
    <Content Include="Content\bootstrap.min.css" />
    <Content Include="Content\AllDialogs.css" />
    <Content Include="Content\chosen-sprite%402x.png" />
    <Content Include="Content\chosen-sprite.png" />
    <Content Include="Content\chosen.css" />
    <Content Include="Content\Messages.css" />
    <Content Include="Content\NewMessage.css" />
    <Content Include="Content\Profile.css" />
    <Content Include="Content\RNP_view.css" />
    <Content Include="Content\SiteMaster.css" />
    <Content Include="Content\timetable.css" />
    <Content Include="Default.aspx" />
    <Content Include="Images\blue_line.png" />
    <Content Include="Images\choice\NOT.png" />
    <Content Include="Images\choice\OK.png" />
    <Content Include="Images\circles.png" />
    <Content Include="Images\contacts.png" />
    <Content Include="Images\diary.png" />
    <Content Include="Images\dovidka.png" />
    <Content Include="Images\exams.png" />
    <Content Include="Images\exit.png" />
    <Content Include="Images\exite_grey.png" />
    <Content Include="Images\exite_orange.png" />
    <Content Include="Images\footer.png" />
    <Content Include="Images\forum.png" />
    <Content Include="Images\foto.png" />
    <Content Include="Images\godin.png" />
    <Content Include="Images\header_line.png" />
    <Content Include="Images\help_box\help_box_bg.png" />
    <Content Include="Images\help_box\help_box_bottom.png" />
    <Content Include="Images\help_box\help_box_top.png" />
    <Content Include="Images\home.png" />
    <Content Include="Images\home_grey.png" />
    <Content Include="Images\home_orange.png" />
    <Content Include="Images\kabinet_grey.png" />
    <Content Include="Images\kabinet_orange.png" />
    <Content Include="Images\kred_ects.png" />
    <Content Include="Images\kurs_proj.png" />
    <Content Include="Images\kurs_rob.png" />
    <Content Include="Images\lab.png" />
    <Content Include="Images\lect.png" />
    <Content Include="Images\loading.gif" />
    <Content Include="Images\logo.jpg" />
    <Content Include="Images\logo.png" />
    <Content Include="Images\messages.png" />
    <Content Include="Images\ogoloshenya.png" />
    <Content Include="Images\parol.png" />
    <Content Include="Images\pract.png" />
    <Content Include="Images\profil.png" />
    <Content Include="Images\razdelitel.png" />
    <Content Include="Images\samost.png" />
    <Content Include="Images\user_pic.png" />
    <Content Include="Images\vsogo.png" />
    <Content Include="Images\zaliki.png" />
    <Content Include="RNP\RNP_view.aspx" />
    <Content Include="packages.config" />
    <Content Include="fonts\glyphicons-halflings-regular.woff" />
    <Content Include="fonts\glyphicons-halflings-regular.ttf" />
    <Content Include="fonts\glyphicons-halflings-regular.svg" />
    <Content Include="fonts\glyphicons-halflings-regular.eot" />
    <Content Include="Content\bootstrap-chosen.scss" />
    <Content Include="Content\bootstrap-chosen.less" />
    <None Include="Properties\PublishProfiles\Campus_New_Age_Pub.pubxml" />
    <None Include="Properties\PublishProfiles\local.pubxml" />
    <None Include="Properties\PublishProfiles\pub 2014.pubxml" />
    <None Include="Scripts\jquery-2.0.3.intellisense.js" />
    <Content Include="Scripts\chosen.jquery.js" />
    <Content Include="Scripts\chosen.jquery.min.js" />
    <Content Include="Scripts\core.js" />
    <Content Include="Scripts\jquery-2.0.3.js" />
    <Content Include="Scripts\jquery-2.0.3.min.js" />
    <Content Include="Scripts\jquery.min.js" />
    <Content Include="Scripts\timetable.js" />
    <Content Include="Sources\RNP_view.css" />
    <Content Include="TimeTable\TimeTableEdit.aspx" />
    <Content Include="TimeTable\TimeTableMain.aspx" />
    <Content Include="WebForm1.aspx" />
    <Content Include="Scripts\bootstrap.js" />
    <Content Include="Scripts\bootstrap.min.js" />
    <Content Include="Web.config" />
    <Content Include="Web.sitemap" />
  </ItemGroup>
  <ItemGroup>
    <Compile Include="Authentication\Authentication.aspx.cs">
      <DependentUpon>Authentication.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Authentication.aspx.designer.cs">
      <DependentUpon>Authentication.aspx</DependentUpon>
    </Compile>
    <Compile Include="Authentication\Bulletins\AllBulletins.aspx.cs">
      <DependentUpon>AllBulletins.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Bulletins\AllBulletins.aspx.designer.cs">
      <DependentUpon>AllBulletins.aspx</DependentUpon>
    </Compile>
    <Compile Include="Authentication\Bulletins\MyBulletins.aspx.cs">
      <DependentUpon>MyBulletins.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Bulletins\MyBulletins.aspx.designer.cs">
      <DependentUpon>MyBulletins.aspx</DependentUpon>
    </Compile>
    <Compile Include="Authentication\Messages\Messages.aspx.cs">
      <DependentUpon>Messages.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Messages\Messages.aspx.designer.cs">
      <DependentUpon>Messages.aspx</DependentUpon>
    </Compile>
    <Compile Include="Authentication\Messages\AllDialogs.aspx.cs">
      <DependentUpon>AllDialogs.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Messages\AllDialogs.aspx.designer.cs">
      <DependentUpon>AllDialogs.aspx</DependentUpon>
    </Compile>
    <Compile Include="Authentication\Messages\NewMessage.aspx.cs">
      <DependentUpon>NewMessage.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Messages\NewMessage.aspx.designer.cs">
      <DependentUpon>NewMessage.aspx</DependentUpon>
    </Compile>
    <Compile Include="Authentication\Profile.aspx.cs">
      <DependentUpon>Profile.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Authentication\Profile.aspx.designer.cs">
      <DependentUpon>Profile.aspx</DependentUpon>
    </Compile>
    <Compile Include="Default.aspx.cs">
      <DependentUpon>Default.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Default.aspx.designer.cs">
      <DependentUpon>Default.aspx</DependentUpon>
    </Compile>
    <Compile Include="Properties\AssemblyInfo.cs" />
    <Compile Include="RNP\RNP_view.aspx.cs">
      <DependentUpon>RNP_view.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="RNP\RNP_view.aspx.designer.cs">
      <DependentUpon>RNP_view.aspx</DependentUpon>
    </Compile>
    <Compile Include="Site.Master.cs">
      <DependentUpon>Site.Master</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="Site.Master.designer.cs">
      <DependentUpon>Site.Master</DependentUpon>
    </Compile>
    <Compile Include="SitePlusNav.Master.cs">
      <DependentUpon>SitePlusNav.Master</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="SitePlusNav.Master.designer.cs">
      <DependentUpon>SitePlusNav.Master</DependentUpon>
    </Compile>
    <Compile Include="TimeTable\TimeTableEdit.aspx.cs">
      <DependentUpon>TimeTableEdit.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="TimeTable\TimeTableEdit.aspx.designer.cs">
      <DependentUpon>TimeTableEdit.aspx</DependentUpon>
    </Compile>
    <Compile Include="TimeTable\TimeTableMain.aspx.cs">
      <DependentUpon>TimeTableMain.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="TimeTable\TimeTableMain.aspx.designer.cs">
      <DependentUpon>TimeTableMain.aspx</DependentUpon>
    </Compile>
    <Compile Include="WebForm1.aspx.cs">
      <DependentUpon>WebForm1.aspx</DependentUpon>
      <SubType>ASPXCodeBehind</SubType>
    </Compile>
    <Compile Include="WebForm1.aspx.designer.cs">
      <DependentUpon>WebForm1.aspx</DependentUpon>
    </Compile>
  </ItemGroup>
  <ItemGroup>
    <Content Include="Scripts\jquery-2.0.3.min.map" />
    <Content Include="Site.Master" />
    <Content Include="SitePlusNav.Master" />
    <None Include="Web.Debug.config">
      <DependentUpon>Web.config</DependentUpon>
    </None>
    <None Include="Web.Release.config">
      <DependentUpon>Web.config</DependentUpon>
    </None>
  </ItemGroup>
  <ItemGroup>
    <Folder Include="FileServer\" />
  </ItemGroup>
  <ItemGroup>
    <ProjectReference Include="..\Core\Core.csproj">
      <Project>{c4ebf4e3-1ea1-46ec-bb58-db4876272676}</Project>
      <Name>Core</Name>
    </ProjectReference>
  </ItemGroup>
  <PropertyGroup>
    <VisualStudioVersion Condition="'$(VisualStudioVersion)' == ''">10.0</VisualStudioVersion>
    <VSToolsPath Condition="'$(VSToolsPath)' == ''">$(MSBuildExtensionsPath32)\Microsoft\VisualStudio\v$(VisualStudioVersion)</VSToolsPath>
  </PropertyGroup>
  <Import Project="$(MSBuildBinPath)\Microsoft.CSharp.targets" />
  <Import Project="$(VSToolsPath)\WebApplications\Microsoft.WebApplication.targets" Condition="'$(VSToolsPath)' != ''" />
  <Import Project="$(MSBuildExtensionsPath32)\Microsoft\VisualStudio\v10.0\WebApplications\Microsoft.WebApplication.targets" Condition="false" />
  <ProjectExtensions>
    <VisualStudio>
      <FlavorProperties GUID="{349c5851-65df-11da-9384-00065b846f21}">
        <WebProjectProperties>
          <UseIIS>True</UseIIS>
          <AutoAssignPort>True</AutoAssignPort>
          <DevelopmentServerPort>50091</DevelopmentServerPort>
          <DevelopmentServerVPath>/</DevelopmentServerVPath>
          <IISUrl>http://ecampus.local:8080/</IISUrl>
          <OverrideIISAppRootUrl>True</OverrideIISAppRootUrl>
          <IISAppRootUrl>http://ecampus.local:8080/</IISAppRootUrl>
          <NTLMAuthentication>False</NTLMAuthentication>
          <UseCustomServer>False</UseCustomServer>
          <CustomServerUrl>
          </CustomServerUrl>
          <SaveServerSettingsInUserFile>False</SaveServerSettingsInUserFile>
        </WebProjectProperties>
      </FlavorProperties>
    </VisualStudio>
  </ProjectExtensions>
  <Import Project="..\packages\Microsoft.Bcl.Build.1.0.13\tools\Microsoft.Bcl.Build.targets" Condition="Exists('..\packages\Microsoft.Bcl.Build.1.0.13\tools\Microsoft.Bcl.Build.targets')" />
  <Target Name="EnsureBclBuildImported" BeforeTargets="BeforeBuild" Condition="'$(BclBuildImported)' == ''">
    <Error Condition="!Exists('..\packages\Microsoft.Bcl.Build.1.0.13\tools\Microsoft.Bcl.Build.targets')" Text="This project references NuGet package(s) that are missing on this computer. Enable NuGet Package Restore to download them.  For more information, see http://go.microsoft.com/fwlink/?LinkID=317567." HelpKeyword="BCLBUILD2001" />
    <Error Condition="Exists('..\packages\Microsoft.Bcl.Build.1.0.13\tools\Microsoft.Bcl.Build.targets')" Text="The build restored NuGet packages. Build the project again to include these packages in the build. For more information, see http://go.microsoft.com/fwlink/?LinkID=317568." HelpKeyword="BCLBUILD2002" />
  </Target>
  <!-- To modify your build process, add your task inside one of the targets below and uncomment it. 
       Other similar extension points exist, see Microsoft.Common.targets.
  <Target Name="BeforeBuild">
  </Target>
  <Target Name="AfterBuild">
  </Target>
  -->
</Project>