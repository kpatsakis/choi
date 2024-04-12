void fun()
{
  int entity_5 = 52;
  char* entity_8;
  char entity_4[77] = "";
  entity_4 = NULL;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[56-1]='';
  memset(entity_4, 'c', 77-1);
  entity_4[77-1]='';
  memset(entity_7, 'i', entity_5-1);
  entity_7[entity_5-1]='';
  entity_5 = 79;
  memcpy(entity_8, entity_7, entity_5*sizeof(char));
}