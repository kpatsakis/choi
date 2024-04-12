void fun()
{
  int entity_3 = 26;
  int entity_7 = 41;
  int entity_8 = 32;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'j', entity_8-1);
  entity_5[entity_8-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  memcpy(entity_6, entity_5, entity_8*sizeof(char));
}