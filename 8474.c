void fun()
{
  int entity_1 = 11;
  char entity_0[53] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_9[21] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', 21-1);
  entity_9[21-1]='';
  memset(entity_0, 'q', 53-1);
  entity_0[53-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  strcpy(entity_6, entity_9);
}