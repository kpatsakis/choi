void fun()
{
  int entity_2 = 53;
  char* entity_6;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_9[93] = "";
  entity_9 = NULL;
  char entity_1[17] = "";
  entity_1 = NULL;
  char entity_3[3] = "";
  entity_3 = NULL;
  memset(entity_7, 'X', entity_2-1);
  entity_7[entity_2-1]='';
  memset(entity_9, 'H', 93-1);
  entity_9[93-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memset(entity_3, 'Q', 3-1);
  entity_3[3-1]='';
  memset(entity_1, 'F', 17-1);
  entity_1[17-1]='';
  strcpy(entity_6, entity_7);
}