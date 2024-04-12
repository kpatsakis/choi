void fun()
{
  int entity_2 = 88;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  memset(entity_0, 'G', entity_2-1);
  entity_0[entity_2-1]='';
  memcpy(entity_9, entity_0, entity_2*sizeof(char));
}