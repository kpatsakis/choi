void fun()
{
  int entity_3 = 14;
  char* entity_4;
  char* entity_7;
  char entity_2[52] = "";
  entity_2 = NULL;
  char entity_9[5] = "";
  entity_9 = NULL;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_9, 'T', 5-1);
  entity_9[5-1]='';
  memset(entity_2, 'D', 52-1);
  entity_2[52-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_5, 'S', entity_3-1);
  entity_5[entity_3-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  strcpy(entity_4, entity_5);
}