void fun()
{
  char entity_7[87] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_5[25] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_8 = 'J';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memset(entity_7, 'B', 87-1);
  entity_7[87-1]='';
  entity_6 = (char*)malloc(92*sizeof(char));
  entity_6[92-1]='';
  memset(entity_5, 'd', 25-1);
  entity_5[25-1]='';
  memcpy(entity_6, entity_7, 87*sizeof(char));
}