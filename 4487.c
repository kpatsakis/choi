void fun()
{
  int entity_2 = 28;
  char* entity_4;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  memset(entity_5, 'U', entity_2-1);
  entity_5[entity_2-1]='';
  entity_2 = 17;
  strcpy(entity_4, entity_5);
}