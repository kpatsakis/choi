void fun()
{
  int entity_4 = 72;
  char* entity_3;
  char entity_9[52] = "";
  entity_9 = NULL;
  char entity_6[41] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_6, 'B', 41-1);
  entity_6[41-1]='';
  memset(entity_9, 'l', 52-1);
  entity_9[52-1]='';
  memcpy(entity_3, entity_6, 41*sizeof(char));
}