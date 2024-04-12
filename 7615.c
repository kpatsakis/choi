void fun()
{
  int entity_7 = 51;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  memset(entity_5, 'l', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 11;
  strcpy(entity_2, entity_5);
}