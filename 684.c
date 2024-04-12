void fun()
{
  int entity_8 = 94;
  entity_8 = 94;
  char* entity_5;
  char entity_6[55] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  memset(entity_6, 'j', 55-1);
  entity_6[55-1]='';
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[88-1]='';
  memset(entity_4, 'z', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_7, entity_4);
}