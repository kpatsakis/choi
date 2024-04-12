void fun()
{
  int entity_4 = 12;
  char entity_6[80] = "";
  entity_6 = NULL;
  char entity_5 = 'F';
  char* entity_1;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char entity_0[50] = "";
  entity_0 = NULL;
  memset(entity_6, 'Z', 80-1);
  entity_6[80-1]='';
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[39-1]='';
  memset(entity_0, 'i', 50-1);
  entity_0[50-1]='';
  memset(entity_9, 'Y', entity_4-1);
  entity_9[entity_4-1]='';
  strcpy(entity_1, entity_9);
}