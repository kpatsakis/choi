void fun()
{
  int entity_0 = 76;
  char* entity_9;
  char entity_5[23] = "";
  entity_5 = NULL;
  char entity_4 = 'c';
  char entity_6[6] = "";
  entity_6 = NULL;
  memset(entity_5, 'X', 23-1);
  entity_5[23-1]='';
  memset(entity_6, 'w', 6-1);
  entity_6[6-1]='';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  memcpy(entity_9, entity_6, 6*sizeof(char));
}