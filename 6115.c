void fun()
{
  int entity_5 = 61;
  char* entity_6;
  char entity_9[65] = "";
  entity_9 = NULL;
  char entity_1[46] = "";
  entity_1 = NULL;
  char entity_2[79] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 79-1);
  entity_2[79-1]='';
  memset(entity_1, 'e', 46-1);
  entity_1[46-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_9, 'U', 65-1);
  entity_9[65-1]='';
  entity_5 = 65;
  strcpy(entity_6, entity_1);
}