void fun()
{
  int entity_8 = 66;
  entity_8 = 67;
  char* entity_9;
  char entity_5[24] = "";
  entity_5 = NULL;
  char entity_1 = 'K';
  char entity_2[44] = "";
  entity_2 = NULL;
  char entity_0[43] = "";
  entity_0 = NULL;
  memset(entity_0, 'm', 43-1);
  entity_0[43-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_5, 'f', 24-1);
  entity_5[24-1]='';
  memset(entity_2, 'l', 44-1);
  entity_2[44-1]='';
  strcpy(entity_9, entity_2);
}