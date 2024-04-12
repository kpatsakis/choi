void fun()
{
  int entity_5 = 50;
  char* entity_0;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', entity_5-1);
  entity_2[entity_5-1]='';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  entity_5 = 33;
  memcpy(entity_0, entity_2, entity_5*sizeof(char));
}