void fun()
{
  int entity_9 = 72;
  char* entity_0;
  char entity_8[84] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', 84-1);
  entity_8[84-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_9 = 4;
  strcpy(entity_0, entity_8);
}