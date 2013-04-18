# copy the correct version of ECLogging.framework into the app
echo "Copying ECLogging framework"
ECLOGGING_NAME="ECLogging.framework"
ECLOGGING_DEST="${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}"
ECLOGGING_SRC="${SRCROOT}/../Frameworks/ECLogging/Mac/${CONFIGURATION}/${ECLOGGING_NAME}"

rm -rf "${ECLOGGING_DEST}/${ECLOGGING_NAME}"
mkdir -p "${ECLOGGING_DEST}"
cp -R "${ECLOGGING_SRC}" "${ECLOGGING_DEST}"
