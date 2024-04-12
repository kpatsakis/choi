void fun()
{
  char entity_1[50] = "";
  entity_1 = NULL;
  char entity_9[23] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'L', 23-1);
  entity_9[23-1]='';
  memset(entity_1, 'T', 50-1);
  entity_1[50-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  strcpy(entity_0, entity_9);
}