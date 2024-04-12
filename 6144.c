void fun()
{
  int entity_9 = 80;
  int entity_4 = 86;
  char entity_7[5] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_6[80] = "";
  entity_6 = NULL;
  char entity_0[17] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', 17-1);
  entity_0[17-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_7, 'm', 5-1);
  entity_7[5-1]='';
  memset(entity_6, 'O', 80-1);
  entity_6[80-1]='';
  entity_9 = 32;
  strcpy(entity_3, entity_0);
}