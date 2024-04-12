void fun()
{
  int entity_5 = 1;
  char* entity_7;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_2[3] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  memset(entity_2, 'O', 3-1);
  entity_2[3-1]='';
  memset(entity_4, 'f', entity_5-1);
  entity_4[entity_5-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  strcpy(entity_7, entity_4);
}