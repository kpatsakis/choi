void fun()
{
  int entity_5 = 94;
  char* entity_3;
  char entity_0[17] = "";
  entity_0 = NULL;
  char entity_1[80] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  memset(entity_0, 'k', 17-1);
  entity_0[17-1]='';
  memset(entity_1, 'n', 80-1);
  entity_1[80-1]='';
  strcpy(entity_3, entity_0);
}