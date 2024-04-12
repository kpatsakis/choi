void fun()
{
  int entity_8 = 62;
  char entity_0 = 'd';
  char entity_9[16] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_9, 'y', 16-1);
  entity_9[16-1]='';
  memcpy(entity_4, entity_9, 16*sizeof(char));
}