void fun()
{
  int entity_8 = 57;
  char entity_2[32] = "";
  entity_2 = NULL;
  char entity_1[81] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'b', 81-1);
  entity_1[81-1]='';
  memset(entity_2, 's', 32-1);
  entity_2[32-1]='';
  entity_8 = 16;
  memcpy(entity_9, entity_2, 32*sizeof(char));
}