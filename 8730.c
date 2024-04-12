void fun()
{
  int entity_4 = 14;
  char* entity_1;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memset(entity_5, 'H', entity_4-1);
  entity_5[entity_4-1]='';
  strcpy(entity_1, entity_5);
}