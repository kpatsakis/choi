void fun()
{
  int entity_3 = 63;
  char entity_8 = 'P';
  char entity_6[46] = "";
  entity_6 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_6, 'u', 46-1);
  entity_6[46-1]='';
  memset(entity_4, 'p', entity_3-1);
  entity_4[entity_3-1]='';
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[14-1]='';
  entity_3 = 97;
  strcpy(entity_9, entity_4);
}