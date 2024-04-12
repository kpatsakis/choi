void fun()
{
  int entity_7 = 31;
  char entity_9[45] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'O', 45-1);
  entity_9[45-1]='';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  entity_9[entity_7] = 't';
}