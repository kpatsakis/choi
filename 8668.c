void fun()
{
  int entity_7 = 71;
  int entity_3 = 62;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_5 = 'r';
  char* entity_1;
  char entity_6[93] = "";
  entity_6 = NULL;
  memset(entity_6, 'N', 93-1);
  entity_6[93-1]='';
  memset(entity_9, 'P', entity_3-1);
  entity_9[entity_3-1]='';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  memcpy(entity_1, entity_9, entity_3*sizeof(char));
}