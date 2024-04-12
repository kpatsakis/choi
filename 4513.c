void fun()
{
  int entity_9 = 58;
  int entity_3 = 49;
  char entity_2[30] = "";
  entity_2 = NULL;
  char entity_6[65] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_2, 'G', 30-1);
  entity_2[30-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_6, 'b', 65-1);
  entity_6[65-1]='';
  strcpy(entity_5, entity_2);
}