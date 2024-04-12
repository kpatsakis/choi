void fun()
{
  int entity_3 = 59;
  char entity_2 = 'u';
  char* entity_0;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_6[17] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(40*sizeof(char));
  entity_0[40-1]='';
  memset(entity_6, 'm', 17-1);
  entity_6[17-1]='';
  memset(entity_9, 'R', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 8;
  strcpy(entity_0, entity_9);
}