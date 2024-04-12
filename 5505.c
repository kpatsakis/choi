void fun()
{
  int entity_7 = 94;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(55*sizeof(char));
  entity_2[55-1]='';
  memset(entity_5, 'Q', entity_7-1);
  entity_5[entity_7-1]='';
  strcpy(entity_2, entity_5);
}