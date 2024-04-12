void fun()
{
  int entity_9 = 39;
  char* entity_7;
  char entity_4[41] = "";
  entity_4 = NULL;
  char entity_2[49] = "";
  entity_2 = NULL;
  char entity_6[9] = "";
  entity_6 = NULL;
  char entity_8 = 'k';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_4, 'Z', 41-1);
  entity_4[41-1]='';
  memset(entity_2, 'Y', 49-1);
  entity_2[49-1]='';
  memset(entity_6, 'Q', 9-1);
  entity_6[9-1]='';
  strcpy(entity_7, entity_6);
}