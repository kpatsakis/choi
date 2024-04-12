void fun()
{
  int entity_1 = 37;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_7[43] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_6, 'N', entity_1-1);
  entity_6[entity_1-1]='';
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[56-1]='';
  memset(entity_7, 't', 43-1);
  entity_7[43-1]='';
  strcpy(entity_9, entity_6);
}