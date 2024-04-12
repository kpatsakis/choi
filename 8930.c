void fun()
{
  int entity_5 = 14;
  entity_5 = 14;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'i', entity_5-1);
  entity_1[entity_5-1]='';
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[73-1]='';
  strcpy(entity_8, entity_1);
}