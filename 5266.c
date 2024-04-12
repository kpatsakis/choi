void fun()
{
  int entity_5 = 73;
  entity_5 = 22;
  char* entity_0;
  char entity_9[27] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_9, 'O', 27-1);
  entity_9[27-1]='';
  memcpy(entity_0, entity_9, 27*sizeof(char));
}