void fun()
{
  int entity_9 = 49;
  char entity_1[38] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'X', 38-1);
  entity_1[38-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memcpy(entity_0, entity_1, 38*sizeof(char));
}