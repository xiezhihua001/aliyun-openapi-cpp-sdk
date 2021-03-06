#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(imm_public_header 
	include/alibabacloud/imm/ImmClient.h
	include/alibabacloud/imm/ImmExport.h )

set(imm_public_header_model 
	include/alibabacloud/imm/model/ListPornBatchDetectJobsRequest.h
	include/alibabacloud/imm/model/ListPornBatchDetectJobsResult.h
	include/alibabacloud/imm/model/DetectImageFacesRequest.h
	include/alibabacloud/imm/model/DetectImageFacesResult.h
	include/alibabacloud/imm/model/DetectImageTagsRequest.h
	include/alibabacloud/imm/model/DetectImageTagsResult.h
	include/alibabacloud/imm/model/DeleteImageRequest.h
	include/alibabacloud/imm/model/DeleteImageResult.h
	include/alibabacloud/imm/model/CreateTagJobRequest.h
	include/alibabacloud/imm/model/CreateTagJobResult.h
	include/alibabacloud/imm/model/IndexTagRequest.h
	include/alibabacloud/imm/model/IndexTagResult.h
	include/alibabacloud/imm/model/ListProjectsRequest.h
	include/alibabacloud/imm/model/ListProjectsResult.h
	include/alibabacloud/imm/model/DeleteSetRequest.h
	include/alibabacloud/imm/model/DeleteSetResult.h
	include/alibabacloud/imm/model/GetFaceSearchImageRequest.h
	include/alibabacloud/imm/model/GetFaceSearchImageResult.h
	include/alibabacloud/imm/model/CreateVideoAnalyseTaskRequest.h
	include/alibabacloud/imm/model/CreateVideoAnalyseTaskResult.h
	include/alibabacloud/imm/model/CompareFaceRequest.h
	include/alibabacloud/imm/model/CompareFaceResult.h
	include/alibabacloud/imm/model/DetectTagRequest.h
	include/alibabacloud/imm/model/DetectTagResult.h
	include/alibabacloud/imm/model/ListFaceSearchGroupUsersRequest.h
	include/alibabacloud/imm/model/ListFaceSearchGroupUsersResult.h
	include/alibabacloud/imm/model/ListFaceSearchGroupImagesRequest.h
	include/alibabacloud/imm/model/ListFaceSearchGroupImagesResult.h
	include/alibabacloud/imm/model/CreateCADConversionTaskRequest.h
	include/alibabacloud/imm/model/CreateCADConversionTaskResult.h
	include/alibabacloud/imm/model/GetTagJobRequest.h
	include/alibabacloud/imm/model/GetTagJobResult.h
	include/alibabacloud/imm/model/DeleteFaceJobRequest.h
	include/alibabacloud/imm/model/DeleteFaceJobResult.h
	include/alibabacloud/imm/model/CreateDocIndexTaskRequest.h
	include/alibabacloud/imm/model/CreateDocIndexTaskResult.h
	include/alibabacloud/imm/model/PutProjectRequest.h
	include/alibabacloud/imm/model/PutProjectResult.h
	include/alibabacloud/imm/model/GetSetRequest.h
	include/alibabacloud/imm/model/GetSetResult.h
	include/alibabacloud/imm/model/GetVideoTaskRequest.h
	include/alibabacloud/imm/model/GetVideoTaskResult.h
	include/alibabacloud/imm/model/ListSetsRequest.h
	include/alibabacloud/imm/model/ListSetsResult.h
	include/alibabacloud/imm/model/SearchDocIndexRequest.h
	include/alibabacloud/imm/model/SearchDocIndexResult.h
	include/alibabacloud/imm/model/ListPhotoProcessTasksRequest.h
	include/alibabacloud/imm/model/ListPhotoProcessTasksResult.h
	include/alibabacloud/imm/model/ListVideosRequest.h
	include/alibabacloud/imm/model/ListVideosResult.h
	include/alibabacloud/imm/model/CreatePornBatchDetectJobRequest.h
	include/alibabacloud/imm/model/CreatePornBatchDetectJobResult.h
	include/alibabacloud/imm/model/FindImagesRequest.h
	include/alibabacloud/imm/model/FindImagesResult.h
	include/alibabacloud/imm/model/DeleteTagByNameRequest.h
	include/alibabacloud/imm/model/DeleteTagByNameResult.h
	include/alibabacloud/imm/model/DetectImageLogosRequest.h
	include/alibabacloud/imm/model/DetectImageLogosResult.h
	include/alibabacloud/imm/model/GetProjectRequest.h
	include/alibabacloud/imm/model/GetProjectResult.h
	include/alibabacloud/imm/model/DeletePhotoProcessTaskRequest.h
	include/alibabacloud/imm/model/DeletePhotoProcessTaskResult.h
	include/alibabacloud/imm/model/ListSetTagsRequest.h
	include/alibabacloud/imm/model/ListSetTagsResult.h
	include/alibabacloud/imm/model/DeleteVideoTaskRequest.h
	include/alibabacloud/imm/model/DeleteVideoTaskResult.h
	include/alibabacloud/imm/model/FindImagesByTagNamesRequest.h
	include/alibabacloud/imm/model/FindImagesByTagNamesResult.h
	include/alibabacloud/imm/model/DeleteTagSetRequest.h
	include/alibabacloud/imm/model/DeleteTagSetResult.h
	include/alibabacloud/imm/model/DeleteProjectRequest.h
	include/alibabacloud/imm/model/DeleteProjectResult.h
	include/alibabacloud/imm/model/UpdateDocIndexMetaRequest.h
	include/alibabacloud/imm/model/UpdateDocIndexMetaResult.h
	include/alibabacloud/imm/model/SearchFaceRequest.h
	include/alibabacloud/imm/model/SearchFaceResult.h
	include/alibabacloud/imm/model/GetImageRequest.h
	include/alibabacloud/imm/model/GetImageResult.h
	include/alibabacloud/imm/model/DetectImageCelebrityRequest.h
	include/alibabacloud/imm/model/DetectImageCelebrityResult.h
	include/alibabacloud/imm/model/CreateSetRequest.h
	include/alibabacloud/imm/model/CreateSetResult.h
	include/alibabacloud/imm/model/DeletePornBatchDetectJobRequest.h
	include/alibabacloud/imm/model/DeletePornBatchDetectJobResult.h
	include/alibabacloud/imm/model/ListFaceSearchGroupsRequest.h
	include/alibabacloud/imm/model/ListFaceSearchGroupsResult.h
	include/alibabacloud/imm/model/GetTagSetRequest.h
	include/alibabacloud/imm/model/GetTagSetResult.h
	include/alibabacloud/imm/model/ConvertOfficeFormatRequest.h
	include/alibabacloud/imm/model/ConvertOfficeFormatResult.h
	include/alibabacloud/imm/model/ListTagPhotosRequest.h
	include/alibabacloud/imm/model/ListTagPhotosResult.h
	include/alibabacloud/imm/model/DeleteFaceSearchImageByIdRequest.h
	include/alibabacloud/imm/model/DeleteFaceSearchImageByIdResult.h
	include/alibabacloud/imm/model/IndexVideoRequest.h
	include/alibabacloud/imm/model/IndexVideoResult.h
	include/alibabacloud/imm/model/DeleteDocIndexRequest.h
	include/alibabacloud/imm/model/DeleteDocIndexResult.h
	include/alibabacloud/imm/model/GetDocIndexTaskRequest.h
	include/alibabacloud/imm/model/GetDocIndexTaskResult.h
	include/alibabacloud/imm/model/GetImageJobRequest.h
	include/alibabacloud/imm/model/GetImageJobResult.h
	include/alibabacloud/imm/model/ListVideoAudiosRequest.h
	include/alibabacloud/imm/model/ListVideoAudiosResult.h
	include/alibabacloud/imm/model/DeleteTagByUrlRequest.h
	include/alibabacloud/imm/model/DeleteTagByUrlResult.h
	include/alibabacloud/imm/model/ListTagSetsRequest.h
	include/alibabacloud/imm/model/ListTagSetsResult.h
	include/alibabacloud/imm/model/ListTagNamesRequest.h
	include/alibabacloud/imm/model/ListTagNamesResult.h
	include/alibabacloud/imm/model/CreateOfficeConversionTaskRequest.h
	include/alibabacloud/imm/model/CreateOfficeConversionTaskResult.h
	include/alibabacloud/imm/model/DetectQRCodesRequest.h
	include/alibabacloud/imm/model/DetectQRCodesResult.h
	include/alibabacloud/imm/model/GetFaceSearchGroupRequest.h
	include/alibabacloud/imm/model/GetFaceSearchGroupResult.h
	include/alibabacloud/imm/model/GetVideoRequest.h
	include/alibabacloud/imm/model/GetVideoResult.h
	include/alibabacloud/imm/model/ListImagesRequest.h
	include/alibabacloud/imm/model/ListImagesResult.h
	include/alibabacloud/imm/model/CompareImageFacesRequest.h
	include/alibabacloud/imm/model/CompareImageFacesResult.h
	include/alibabacloud/imm/model/DeleteTagJobRequest.h
	include/alibabacloud/imm/model/DeleteTagJobResult.h
	include/alibabacloud/imm/model/DeleteOfficeConversionTaskRequest.h
	include/alibabacloud/imm/model/DeleteOfficeConversionTaskResult.h
	include/alibabacloud/imm/model/PhotoProcessRequest.h
	include/alibabacloud/imm/model/PhotoProcessResult.h
	include/alibabacloud/imm/model/GetPhotoProcessTaskRequest.h
	include/alibabacloud/imm/model/GetPhotoProcessTaskResult.h
	include/alibabacloud/imm/model/ListVideoFramesRequest.h
	include/alibabacloud/imm/model/ListVideoFramesResult.h
	include/alibabacloud/imm/model/GetPornBatchDetectJobRequest.h
	include/alibabacloud/imm/model/GetPornBatchDetectJobResult.h
	include/alibabacloud/imm/model/DetectLogoRequest.h
	include/alibabacloud/imm/model/DetectLogoResult.h
	include/alibabacloud/imm/model/DetectClothesRequest.h
	include/alibabacloud/imm/model/DetectClothesResult.h
	include/alibabacloud/imm/model/ListTagJobsRequest.h
	include/alibabacloud/imm/model/ListTagJobsResult.h
	include/alibabacloud/imm/model/DescribeRegionsRequest.h
	include/alibabacloud/imm/model/DescribeRegionsResult.h
	include/alibabacloud/imm/model/DeleteFaceSearchUserRequest.h
	include/alibabacloud/imm/model/DeleteFaceSearchUserResult.h
	include/alibabacloud/imm/model/GetOfficeConversionTaskRequest.h
	include/alibabacloud/imm/model/GetOfficeConversionTaskResult.h
	include/alibabacloud/imm/model/CreateTagSetRequest.h
	include/alibabacloud/imm/model/CreateTagSetResult.h
	include/alibabacloud/imm/model/RegistFaceRequest.h
	include/alibabacloud/imm/model/RegistFaceResult.h
	include/alibabacloud/imm/model/FindSimilarFacesRequest.h
	include/alibabacloud/imm/model/FindSimilarFacesResult.h
	include/alibabacloud/imm/model/GetFaceSearchUserRequest.h
	include/alibabacloud/imm/model/GetFaceSearchUserResult.h
	include/alibabacloud/imm/model/DeleteImageJobRequest.h
	include/alibabacloud/imm/model/DeleteImageJobResult.h
	include/alibabacloud/imm/model/CreateFaceSetRequest.h
	include/alibabacloud/imm/model/CreateFaceSetResult.h
	include/alibabacloud/imm/model/DeleteFaceSearchGroupRequest.h
	include/alibabacloud/imm/model/DeleteFaceSearchGroupResult.h
	include/alibabacloud/imm/model/GetDocIndexRequest.h
	include/alibabacloud/imm/model/GetDocIndexResult.h
	include/alibabacloud/imm/model/IndexImageRequest.h
	include/alibabacloud/imm/model/IndexImageResult.h
	include/alibabacloud/imm/model/DetectImageTextsRequest.h
	include/alibabacloud/imm/model/DetectImageTextsResult.h
	include/alibabacloud/imm/model/ListImageJobsRequest.h
	include/alibabacloud/imm/model/ListImageJobsResult.h
	include/alibabacloud/imm/model/CreateGroupFacesJobRequest.h
	include/alibabacloud/imm/model/CreateGroupFacesJobResult.h
	include/alibabacloud/imm/model/UpdateImageRequest.h
	include/alibabacloud/imm/model/UpdateImageResult.h
	include/alibabacloud/imm/model/ListVideoTasksRequest.h
	include/alibabacloud/imm/model/ListVideoTasksResult.h
	include/alibabacloud/imm/model/UpdateProjectRequest.h
	include/alibabacloud/imm/model/UpdateProjectResult.h
	include/alibabacloud/imm/model/DeleteVideoRequest.h
	include/alibabacloud/imm/model/DeleteVideoResult.h
	include/alibabacloud/imm/model/ListOfficeConversionTaskRequest.h
	include/alibabacloud/imm/model/ListOfficeConversionTaskResult.h
	include/alibabacloud/imm/model/UpdateSetRequest.h
	include/alibabacloud/imm/model/UpdateSetResult.h )

set(imm_src 
	src/ImmClient.cc
	src/model/ListPornBatchDetectJobsRequest.cc
	src/model/ListPornBatchDetectJobsResult.cc
	src/model/DetectImageFacesRequest.cc
	src/model/DetectImageFacesResult.cc
	src/model/DetectImageTagsRequest.cc
	src/model/DetectImageTagsResult.cc
	src/model/DeleteImageRequest.cc
	src/model/DeleteImageResult.cc
	src/model/CreateTagJobRequest.cc
	src/model/CreateTagJobResult.cc
	src/model/IndexTagRequest.cc
	src/model/IndexTagResult.cc
	src/model/ListProjectsRequest.cc
	src/model/ListProjectsResult.cc
	src/model/DeleteSetRequest.cc
	src/model/DeleteSetResult.cc
	src/model/GetFaceSearchImageRequest.cc
	src/model/GetFaceSearchImageResult.cc
	src/model/CreateVideoAnalyseTaskRequest.cc
	src/model/CreateVideoAnalyseTaskResult.cc
	src/model/CompareFaceRequest.cc
	src/model/CompareFaceResult.cc
	src/model/DetectTagRequest.cc
	src/model/DetectTagResult.cc
	src/model/ListFaceSearchGroupUsersRequest.cc
	src/model/ListFaceSearchGroupUsersResult.cc
	src/model/ListFaceSearchGroupImagesRequest.cc
	src/model/ListFaceSearchGroupImagesResult.cc
	src/model/CreateCADConversionTaskRequest.cc
	src/model/CreateCADConversionTaskResult.cc
	src/model/GetTagJobRequest.cc
	src/model/GetTagJobResult.cc
	src/model/DeleteFaceJobRequest.cc
	src/model/DeleteFaceJobResult.cc
	src/model/CreateDocIndexTaskRequest.cc
	src/model/CreateDocIndexTaskResult.cc
	src/model/PutProjectRequest.cc
	src/model/PutProjectResult.cc
	src/model/GetSetRequest.cc
	src/model/GetSetResult.cc
	src/model/GetVideoTaskRequest.cc
	src/model/GetVideoTaskResult.cc
	src/model/ListSetsRequest.cc
	src/model/ListSetsResult.cc
	src/model/SearchDocIndexRequest.cc
	src/model/SearchDocIndexResult.cc
	src/model/ListPhotoProcessTasksRequest.cc
	src/model/ListPhotoProcessTasksResult.cc
	src/model/ListVideosRequest.cc
	src/model/ListVideosResult.cc
	src/model/CreatePornBatchDetectJobRequest.cc
	src/model/CreatePornBatchDetectJobResult.cc
	src/model/FindImagesRequest.cc
	src/model/FindImagesResult.cc
	src/model/DeleteTagByNameRequest.cc
	src/model/DeleteTagByNameResult.cc
	src/model/DetectImageLogosRequest.cc
	src/model/DetectImageLogosResult.cc
	src/model/GetProjectRequest.cc
	src/model/GetProjectResult.cc
	src/model/DeletePhotoProcessTaskRequest.cc
	src/model/DeletePhotoProcessTaskResult.cc
	src/model/ListSetTagsRequest.cc
	src/model/ListSetTagsResult.cc
	src/model/DeleteVideoTaskRequest.cc
	src/model/DeleteVideoTaskResult.cc
	src/model/FindImagesByTagNamesRequest.cc
	src/model/FindImagesByTagNamesResult.cc
	src/model/DeleteTagSetRequest.cc
	src/model/DeleteTagSetResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/UpdateDocIndexMetaRequest.cc
	src/model/UpdateDocIndexMetaResult.cc
	src/model/SearchFaceRequest.cc
	src/model/SearchFaceResult.cc
	src/model/GetImageRequest.cc
	src/model/GetImageResult.cc
	src/model/DetectImageCelebrityRequest.cc
	src/model/DetectImageCelebrityResult.cc
	src/model/CreateSetRequest.cc
	src/model/CreateSetResult.cc
	src/model/DeletePornBatchDetectJobRequest.cc
	src/model/DeletePornBatchDetectJobResult.cc
	src/model/ListFaceSearchGroupsRequest.cc
	src/model/ListFaceSearchGroupsResult.cc
	src/model/GetTagSetRequest.cc
	src/model/GetTagSetResult.cc
	src/model/ConvertOfficeFormatRequest.cc
	src/model/ConvertOfficeFormatResult.cc
	src/model/ListTagPhotosRequest.cc
	src/model/ListTagPhotosResult.cc
	src/model/DeleteFaceSearchImageByIdRequest.cc
	src/model/DeleteFaceSearchImageByIdResult.cc
	src/model/IndexVideoRequest.cc
	src/model/IndexVideoResult.cc
	src/model/DeleteDocIndexRequest.cc
	src/model/DeleteDocIndexResult.cc
	src/model/GetDocIndexTaskRequest.cc
	src/model/GetDocIndexTaskResult.cc
	src/model/GetImageJobRequest.cc
	src/model/GetImageJobResult.cc
	src/model/ListVideoAudiosRequest.cc
	src/model/ListVideoAudiosResult.cc
	src/model/DeleteTagByUrlRequest.cc
	src/model/DeleteTagByUrlResult.cc
	src/model/ListTagSetsRequest.cc
	src/model/ListTagSetsResult.cc
	src/model/ListTagNamesRequest.cc
	src/model/ListTagNamesResult.cc
	src/model/CreateOfficeConversionTaskRequest.cc
	src/model/CreateOfficeConversionTaskResult.cc
	src/model/DetectQRCodesRequest.cc
	src/model/DetectQRCodesResult.cc
	src/model/GetFaceSearchGroupRequest.cc
	src/model/GetFaceSearchGroupResult.cc
	src/model/GetVideoRequest.cc
	src/model/GetVideoResult.cc
	src/model/ListImagesRequest.cc
	src/model/ListImagesResult.cc
	src/model/CompareImageFacesRequest.cc
	src/model/CompareImageFacesResult.cc
	src/model/DeleteTagJobRequest.cc
	src/model/DeleteTagJobResult.cc
	src/model/DeleteOfficeConversionTaskRequest.cc
	src/model/DeleteOfficeConversionTaskResult.cc
	src/model/PhotoProcessRequest.cc
	src/model/PhotoProcessResult.cc
	src/model/GetPhotoProcessTaskRequest.cc
	src/model/GetPhotoProcessTaskResult.cc
	src/model/ListVideoFramesRequest.cc
	src/model/ListVideoFramesResult.cc
	src/model/GetPornBatchDetectJobRequest.cc
	src/model/GetPornBatchDetectJobResult.cc
	src/model/DetectLogoRequest.cc
	src/model/DetectLogoResult.cc
	src/model/DetectClothesRequest.cc
	src/model/DetectClothesResult.cc
	src/model/ListTagJobsRequest.cc
	src/model/ListTagJobsResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DeleteFaceSearchUserRequest.cc
	src/model/DeleteFaceSearchUserResult.cc
	src/model/GetOfficeConversionTaskRequest.cc
	src/model/GetOfficeConversionTaskResult.cc
	src/model/CreateTagSetRequest.cc
	src/model/CreateTagSetResult.cc
	src/model/RegistFaceRequest.cc
	src/model/RegistFaceResult.cc
	src/model/FindSimilarFacesRequest.cc
	src/model/FindSimilarFacesResult.cc
	src/model/GetFaceSearchUserRequest.cc
	src/model/GetFaceSearchUserResult.cc
	src/model/DeleteImageJobRequest.cc
	src/model/DeleteImageJobResult.cc
	src/model/CreateFaceSetRequest.cc
	src/model/CreateFaceSetResult.cc
	src/model/DeleteFaceSearchGroupRequest.cc
	src/model/DeleteFaceSearchGroupResult.cc
	src/model/GetDocIndexRequest.cc
	src/model/GetDocIndexResult.cc
	src/model/IndexImageRequest.cc
	src/model/IndexImageResult.cc
	src/model/DetectImageTextsRequest.cc
	src/model/DetectImageTextsResult.cc
	src/model/ListImageJobsRequest.cc
	src/model/ListImageJobsResult.cc
	src/model/CreateGroupFacesJobRequest.cc
	src/model/CreateGroupFacesJobResult.cc
	src/model/UpdateImageRequest.cc
	src/model/UpdateImageResult.cc
	src/model/ListVideoTasksRequest.cc
	src/model/ListVideoTasksResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc
	src/model/DeleteVideoRequest.cc
	src/model/DeleteVideoResult.cc
	src/model/ListOfficeConversionTaskRequest.cc
	src/model/ListOfficeConversionTaskResult.cc
	src/model/UpdateSetRequest.cc
	src/model/UpdateSetResult.cc )

add_library(imm ${LIB_TYPE}
	${imm_public_header}
	${imm_public_header_model}
	${imm_src})

set_target_properties(imm
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}imm
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(imm
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IMM_LIBRARY)
endif()

target_include_directories(imm
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(imm
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(imm
		jsoncpp)
	target_include_directories(imm
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(imm
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(imm
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(imm
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(imm
		jsoncpp)
endif()

install(FILES ${imm_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/imm)
install(FILES ${imm_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/imm/model)
install(TARGETS imm
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)