void fun()
{
  int entity_9 = 2;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  memset(entity_1, 'X', entity_9-1);
  entity_1[entity_9-1]='';
  entity_9 = 64;
  memcpy(entity_8, entity_1, entity_9*sizeof(char));
}