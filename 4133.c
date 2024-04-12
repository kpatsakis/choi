void fun()
{
  int entity_3 = 61;
  char entity_9[19] = "";
  entity_9 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char entity_6[87] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_0[58] = "";
  entity_0 = NULL;
  memset(entity_0, 'g', 58-1);
  entity_0[58-1]='';
  memset(entity_4, 'F', entity_3-1);
  entity_4[entity_3-1]='';
  memset(entity_6, 'e', 87-1);
  entity_6[87-1]='';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  memset(entity_9, 'w', 19-1);
  entity_9[19-1]='';
  strcpy(entity_5, entity_4);
}