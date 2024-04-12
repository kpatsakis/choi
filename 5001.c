void fun()
{
  int entity_6 = 99;
  entity_6 = 96;
  char* entity_9;
  char entity_0[55] = "";
  entity_0 = NULL;
  memset(entity_0, 'z', 55-1);
  entity_0[55-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memcpy(entity_9, entity_0, 55*sizeof(char));
}