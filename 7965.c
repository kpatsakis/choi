void fun()
{
  int entity_0 = 17;
  int entity_9 = 56;
  char entity_6[93] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_4[72] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_4, 'G', 72-1);
  entity_4[72-1]='';
  memset(entity_6, 'B', 93-1);
  entity_6[93-1]='';
  strcpy(entity_7, entity_4);
}