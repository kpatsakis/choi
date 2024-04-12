void fun()
{
  int entity_5 = 47;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  memset(entity_1, 'x', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_8, entity_1, entity_5*sizeof(char));
}