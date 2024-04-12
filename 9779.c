void fun()
{
  int entity_8 = 1;
  char* entity_0;
  char entity_9[94] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', 94-1);
  entity_9[94-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memcpy(entity_0, entity_9, 94*sizeof(char));
}