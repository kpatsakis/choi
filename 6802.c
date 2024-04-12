void fun()
{
  int entity_8 = 79;
  int entity_5 = 26;
  char entity_4[95] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_4, 'U', 95-1);
  entity_4[95-1]='';
  memcpy(entity_6, entity_4, 95*sizeof(char));
}