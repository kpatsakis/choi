void fun()
{
  int entity_6 = 65;
  char entity_5[13] = "";
  entity_5 = NULL;
  char entity_9 = 'q';
  char entity_0[20] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_5, 'g', 13-1);
  entity_5[13-1]='';
  memset(entity_0, 'T', 20-1);
  entity_0[20-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_6 = 36;
  strcpy(entity_7, entity_5);
}