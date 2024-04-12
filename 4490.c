void fun()
{
  char entity_0[86] = "";
  entity_0 = NULL;
  char entity_9[12] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_0, 'q', 86-1);
  entity_0[86-1]='';
  memset(entity_9, 'z', 12-1);
  entity_9[12-1]='';
  entity_6 = (char*)malloc(26*sizeof(char));
  entity_6[26-1]='';
  memcpy(entity_6, entity_9, 12*sizeof(char));
}