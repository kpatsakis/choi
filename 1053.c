void fun()
{
  int entity_1 = 19;
  char* entity_4;
  char entity_7 = 'm';
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[56-1]='';
  memset(entity_5, 'U', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 94;
  strcpy(entity_4, entity_5);
}