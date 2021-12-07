async function (req, res) { 
  try {

      let cities=  ["Bengaluru","Mumbai", "Delhi", "Kolkata", "Chennai", "London", "Moscow"]
      let cityObjArray=[]
      //better to use for..of here
      for (i=0 ;i<cities.length; i++){
          let obj= {city:cities[i]}
          let resp=  await axios.get(`http://api.openweathermap.org/data/2.5/weather?q=${city[i]}&appid=f9e638fb1f1d3bf0f0f17434387c9ddc`)
          console.log(resp.data.main.temp)
          obj.temp=resp.data.main.temp
          cityObjArray.push(obj)
      }

      let sorted =cityObjArray.sort(  function(a, b) { return a.temp - b.temp } )
      // can pass cityObjArray also here as sort method does sorting on the same array(in place) and original array is replaced by the sorted one
      //either ways both(sorted and cityObjArray) are referring to same array..assignment by reference is the default assignment in an array
      console.log(sorted)
      res.status(200).send({status: true,data: sorted}) // can pass cityObjArray also here as sort method does sorting on the same array(in place) and original array is replaced by the sorted one
  } catch (error) {
      console.log(error)
      res.status(500).send({status: false, msg: "server error"})
  }
}
