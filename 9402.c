void fun()
{
  int entity_7 = 16;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_6[56] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  memset(entity_6, 'Y', 56-1);
  entity_6[56-1]='';
  memset(entity_5, 'M', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 41;
  memcpy(entity_2, entity_5, entity_7*sizeof(char));
}