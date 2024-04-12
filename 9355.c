void fun()
{
  int entity_3 = 37;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_4[21] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_6, 'H', entity_3-1);
  entity_6[entity_3-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memset(entity_4, 'N', 21-1);
  entity_4[21-1]='';
  strcpy(entity_9, entity_6);
}