void fun()
{
  int entity_5 = 49;
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_7[77] = "";
  entity_7 = NULL;
  char entity_9[7] = "";
  entity_9 = NULL;
  memset(entity_8, 'm', 70-1);
  entity_8[70-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_7, 'h', 77-1);
  entity_7[77-1]='';
  memset(entity_9, 'I', 7-1);
  entity_9[7-1]='';
  memcpy(entity_1, entity_8, 70*sizeof(char));
}