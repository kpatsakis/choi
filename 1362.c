void fun()
{
  int entity_7 = 6;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[98-1]='';
  memset(entity_2, 'Q', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_5, entity_2);
}