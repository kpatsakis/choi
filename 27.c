void fun()
{
  int entity_8 = 81;
  entity_8 = 84;
  char entity_0[84] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_0, 't', 84-1);
  entity_0[84-1]='';
  strcpy(entity_9, entity_0);
}