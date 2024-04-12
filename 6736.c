void fun()
{
  int entity_3 = 38;
  int entity_1 = 75;
  char* entity_2;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(49*sizeof(char));
  entity_2[49-1]='';
  memset(entity_5, 'i', entity_3-1);
  entity_5[entity_3-1]='';
  strcpy(entity_2, entity_5);
}