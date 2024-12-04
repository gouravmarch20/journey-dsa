 const validateImageUrls = (imageUrls) => {
  return new Promise((resolve) => {
    const validUrls = [];
    let processedCount = 0;

    imageUrls.forEach((url) => {
      const img = new Image();
      img.onload = () => {
        validUrls.push(url);
        processedCount++;
        if (processedCount === imageUrls.length) {
          resolve(validUrls);
        }
      };
      img.onerror = () => {
        processedCount++;
        if (processedCount === imageUrls.length) {
          resolve(validUrls);
        }
      };
      img.src = url;
    });
  });
};

const i = [
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459624_original.jpg",
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459625_original.jpg",
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459626_original.jpg",
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459627_original.jpg",
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459628_original.jpg",
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459629_original.jpg",

  
  "https://fastui.cltpstatic.com/image/upload/hotels/places/hotels/cms/7855/785532/images/image_5459709_original.jpg",
];
validateImageUrls(i);
