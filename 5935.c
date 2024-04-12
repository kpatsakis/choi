void fun()
{
  int entity_8 = 52;
  char* entity_7;
  char entity_9[6] = "";
  entity_9 = NULL;
  char entity_2[14] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_2, 'y', 14-1);
  entity_2[14-1]='';
  memset(entity_9, 'x', 6-1);
  entity_9[6-1]='';
  memcpy(entity_7, entity_9, 6*sizeof(char));
}