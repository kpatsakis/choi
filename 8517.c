void fun()
{
  int entity_4 = 44;
  entity_4 = 4;
  char* entity_9;
  char entity_6[23] = "";
  entity_6 = NULL;
  memset(entity_6, 'X', 23-1);
  entity_6[23-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memcpy(entity_9, entity_6, 23*sizeof(char));
}