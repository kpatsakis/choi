void fun()
{
  int entity_5 = 28;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_7;
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_6, 'M', entity_5-1);
  entity_6[entity_5-1]='';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  memcpy(entity_4, entity_6, entity_5*sizeof(char));
}