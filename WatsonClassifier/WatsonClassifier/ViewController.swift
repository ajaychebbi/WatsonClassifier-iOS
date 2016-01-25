//
//  ViewController.swift
//  WatsonClassifier
//
//  Created by Chethan Kumar on 25/01/16.
//  Copyright © 2016 Chethan Kumar. All rights reserved.
//

import UIKit
import Alamofire
import IBMMobileFirstPlatformFoundation

class ViewController: UIViewController {
    
    let baseUrl:String = "https://gateway.watsonplatform.net/natural-language-classifier/api/v1/classifiers/"
    
    //add data specific to your instance here
    let classifierID:String = "";
    let username:String = "";
    let password:String = "";
    
    @IBOutlet var questionTextField: UITextField!
    
    @IBOutlet var resultTextView: UITextView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
//        WLClient.sharedInstance().wlConnectWithDelegate(ConnectDelegate())
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }

    @IBAction func askBtnClick(sender: AnyObject) {
        resultTextView.text="Asking watson to classify ...."
        askWatson(questionTextField.text!)
    }
    
    func askWatson(question:String){
        var resStr:NSMutableDictionary = NSMutableDictionary()
        let credentialData = "\(username):\(password)".dataUsingEncoding(NSUTF8StringEncoding)!
        let base64Credentials = credentialData.base64EncodedStringWithOptions([])
        
        let headers = ["Authorization": "Basic \(base64Credentials)"]

        Alamofire.request(.GET, "\(baseUrl)\(classifierID)/classify", parameters: ["text": question],headers:headers)
            .responseJSON { response in
                
                if let JSON = response.result.value {
                    print("JSON: \(JSON)")
                    resStr=response.result.value as! NSMutableDictionary
                    self.resultTextView.text="Watson says, this relates to: \(resStr.objectForKey("top_class") as! String)"
                }else{
                    self.resultTextView.text="Uh oh!"
                }
               
        }
    }

}

//class ConnectDelegate:NSObject,WLDelegate{
//    @objc func onFailure(response: WLFailResponse!) {
//        print("=======connect failure========")
//    }
//    @objc func onSuccess(response: WLResponse!) {
//        print("=======connect success========")
//    }
//}

