void fun()
{
  int entity_6 = 86;
  int entity_8 = 38;
  int entity_2 = 56;
  char* entity_9;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  memset(entity_3, 'h', entity_8-1);
  entity_3[entity_8-1]='';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  entity_8 = 1;
  strcpy(entity_9, entity_3);
}