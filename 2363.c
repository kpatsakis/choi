void fun()
{
  int entity_3 = 68;
  int entity_6 = 34;
  char* entity_2;
  char entity_9[9] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[23-1]='';
  memset(entity_9, 'N', 9-1);
  entity_9[9-1]='';
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[27-1]='';
  memset(entity_0, 'U', entity_3-1);
  entity_0[entity_3-1]='';
  strcpy(entity_5, entity_0);
}