void fun()
{
  char entity_1[41] = "";
  entity_1 = NULL;
  char* entity_9;
  char* entity_0;
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  memset(entity_1, 'H', 41-1);
  entity_1[41-1]='';
  entity_9 = (char*)malloc(100*sizeof(char));
  entity_9[100-1]='';
  strcpy(entity_9, entity_1);
}