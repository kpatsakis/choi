void fun()
{
  int entity_8 = 95;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_9, 'c', 34-1);
  entity_9[34-1]='';
  memcpy(entity_0, entity_9, 34*sizeof(char));
}