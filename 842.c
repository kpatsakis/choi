void fun()
{
  int entity_6 = 40;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_7[66] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_5;
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  entity_3 = (char*)malloc(56*sizeof(char));
  entity_3[56-1]='';
  memset(entity_7, 'Y', 66-1);
  entity_7[66-1]='';
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  memset(entity_8, 'U', entity_6-1);
  entity_8[entity_6-1]='';
  memcpy(entity_5, entity_8, entity_6*sizeof(char));
}