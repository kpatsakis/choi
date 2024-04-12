void fun()
{
  int entity_5 = 72;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'A', entity_5-1);
  entity_3[entity_5-1]='';
  entity_6 = (char*)malloc(55*sizeof(char));
  entity_6[55-1]='';
  strcpy(entity_6, entity_3);
}