void fun()
{
  int entity_1 = 64;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'W', entity_1-1);
  entity_0[entity_1-1]='';
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  strcpy(entity_4, entity_0);
}