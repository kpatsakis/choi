void fun()
{
  int entity_6 = 21;
  char* entity_0;
  char entity_9[86] = "";
  entity_9 = NULL;
  memset(entity_9, 'c', 86-1);
  entity_9[86-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  entity_9[entity_6] = 'h';
}