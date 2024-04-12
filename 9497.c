void fun()
{
  int entity_6 = 20;
  int entity_1 = 17;
  entity_1 = 17;
  char* entity_4;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  memset(entity_5, 'f', entity_1-1);
  entity_5[entity_1-1]='';
  strcpy(entity_4, entity_5);
}