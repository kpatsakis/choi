void fun()
{
  char entity_1[25] = "";
  entity_1 = NULL;
  char entity_0[91] = "";
  entity_0 = NULL;
  char entity_2[72] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[30-1]='';
  memset(entity_2, 'R', 72-1);
  entity_2[72-1]='';
  memset(entity_1, 'x', 25-1);
  entity_1[25-1]='';
  memset(entity_0, 'J', 91-1);
  entity_0[91-1]='';
  strcpy(entity_9, entity_0);
}