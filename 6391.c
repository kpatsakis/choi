void fun()
{
  int entity_2 = 76;
  entity_2 = 11;
  char entity_1 = 'V';
  char entity_6[55] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_6, 'e', 55-1);
  entity_6[55-1]='';
  memcpy(entity_0, entity_6, 55*sizeof(char));
}