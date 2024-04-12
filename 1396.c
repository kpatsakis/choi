void fun()
{
  int entity_6 = 34;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_7;
  char entity_2[9] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  memset(entity_8, 'm', entity_6-1);
  entity_8[entity_6-1]='';
  entity_7 = (char*)malloc(91*sizeof(char));
  entity_7[91-1]='';
  memset(entity_2, 'h', 9-1);
  entity_2[9-1]='';
  strcpy(entity_0, entity_8);
}