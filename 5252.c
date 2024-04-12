void fun()
{
  int entity_8 = 48;
  int entity_5 = 38;
  char* entity_3;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', entity_8-1);
  entity_4[entity_8-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memcpy(entity_3, entity_4, entity_8*sizeof(char));
}