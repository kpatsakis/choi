void fun()
{
  int entity_4 = 71;
  char* entity_6;
  char* entity_9;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_0[90] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[82-1]='';
  entity_6 = (char*)malloc(29*sizeof(char));
  entity_6[29-1]='';
  memset(entity_2, 'O', entity_4-1);
  entity_2[entity_4-1]='';
  memset(entity_0, 'c', 90-1);
  entity_0[90-1]='';
  strcpy(entity_6, entity_2);
}