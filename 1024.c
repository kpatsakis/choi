void fun()
{
  int entity_6 = 71;
  char entity_4[60] = "";
  entity_4 = NULL;
  char entity_2[70] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_9[10] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_2, 'B', 70-1);
  entity_2[70-1]='';
  memset(entity_9, 'B', 10-1);
  entity_9[10-1]='';
  memset(entity_4, 'N', 60-1);
  entity_4[60-1]='';
  strcpy(entity_3, entity_4);
}