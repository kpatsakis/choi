void fun()
{
  int entity_2 = 72;
  int entity_9 = 56;
  char entity_0[32] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_0, 'w', 32-1);
  entity_0[32-1]='';
  memcpy(entity_1, entity_0, 32*sizeof(char));
}