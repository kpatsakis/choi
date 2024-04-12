void fun()
{
  int entity_1 = 73;
  char* entity_5;
  char entity_0[71] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_0, 'k', 71-1);
  entity_0[71-1]='';
  entity_1 = 93;
  memcpy(entity_5, entity_0, 71*sizeof(char));
}