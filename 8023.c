void fun()
{
  int entity_7 = 33;
  int entity_2 = 75;
  int entity_4 = 71;
  char* entity_0;
  char entity_5[55] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_5, 'F', 55-1);
  entity_5[55-1]='';
  memcpy(entity_0, entity_5, 55*sizeof(char));
}