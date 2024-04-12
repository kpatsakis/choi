void fun()
{
  int entity_1 = 94;
  entity_1 = 94;
  char* entity_5;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'k', entity_1-1);
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(56*sizeof(char));
  entity_5[56-1]='';
  strcpy(entity_5, entity_7);
}