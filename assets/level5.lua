 gscriptable = nil
 

 co = coroutine.create(function ()
 
			-- INICIA script
			
			 i = 1
			 
					
					
			 math.randomseed( os.time() )
			 
			x= math.random(0,6)*10 - 30
			y= math.random(0,6)*10 - 30
			angle = math.random(0,8) * 45
		--	gscriptable:CreateDuo(x,y, 15, angle, 0x0F,0x0F)
			
		    b =  math.random(0,20)
			
			 for i = 0, 100, 1 do
				
				
				if(i>0 and i%20==0) then
					
						
					x= math.random(0,6)*10 - 30
					y= math.random(0,6)*10 - 30
					angle = math.random(0,8) * 45
					
					gscriptable:CreateTri(0,0, 15, angle, 0x00,0x01,0x02)				
					gscriptable:WaitForClear(5000); 
					 
				else

					b =  math.random(0,14)
							
					if i>10 and b%13 == 0 then
						x= math.random(0,6)*10 - 30
						y= math.random(0,6)*10 - 30
						gscriptable:CreateElementAtXY( x+10,  y  , 0x20)			
						gscriptable:CreateElementAtXY( x -5,  y+9, 0x20)			
						gscriptable:CreateElementAtXY( x -5,  y-9, 0x20)			
					else
					 
							x= math.random(0,8)*10 - 40
							y= math.random(0,8)*10 - 40
							angle = math.random(0,8) * 45
		
							b =  math.random(0,2) 
							
							gscriptable:CreateElementAtXY( x ,  y, 0x0F)			
							
							x= math.random(0,8)*10 - 40
							y= math.random(0,8)*10 - 40
							angle = math.random(0,8) * 45	
							b =  math.random(0,2)
						--gscriptable:CreateElementAtXY( x ,  y, 0x0F)
						
					end
					
					gscriptable:Wait(2000)
								
				end
				coroutine.yield()
					
				
				
				
			 end
			 
			-- FIN Script
			
		
			gscriptable:OnScriptFinished()
			
			 
         end)

function update(lscriptable)

  gscriptable = lscriptable
  
  coroutine.resume(co)  
  
end