void fun()
{
  int entity_0 = 63;
  char entity_5[50] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_6 = 'H';
  char entity_9[25] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 25-1);
  entity_9[25-1]='';
  memset(entity_5, 'd', 50-1);
  entity_5[50-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  strcpy(entity_1, entity_9);
}