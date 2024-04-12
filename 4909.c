void fun()
{
  char* entity_9;
  char entity_4 = 'w';
  char entity_1[70] = "";
  entity_1 = NULL;
  char entity_0[50] = "";
  entity_0 = NULL;
  memset(entity_1, 'a', 70-1);
  entity_1[70-1]='';
  memset(entity_0, 'x', 50-1);
  entity_0[50-1]='';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  strcpy(entity_9, entity_1);
}