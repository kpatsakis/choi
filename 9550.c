void fun()
{
  int entity_8 = 44;
  char entity_9[7] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_0[53] = "";
  entity_0 = NULL;
  memset(entity_9, 'j', 7-1);
  entity_9[7-1]='';
  memset(entity_0, 'K', 53-1);
  entity_0[53-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_8 = 22;
  memcpy(entity_1, entity_9, 7*sizeof(char));
}