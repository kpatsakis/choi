void fun()
{
  int entity_0 = 72;
  char* entity_9;
  char entity_6[75] = "";
  entity_6 = NULL;
  char entity_4[30] = "";
  entity_4 = NULL;
  memset(entity_4, 'c', 30-1);
  entity_4[30-1]='';
  entity_9 = (char*)malloc(86*sizeof(char));
  entity_9[86-1]='';
  memset(entity_6, 'd', 75-1);
  entity_6[75-1]='';
  memcpy(entity_9, entity_6, 75*sizeof(char));
}