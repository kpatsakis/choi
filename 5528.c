void fun()
{
  int entity_2 = 74;
  int entity_5 = 82;
  char* entity_7;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char entity_4 = 'X';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  memset(entity_0, 'x', entity_5-1);
  entity_0[entity_5-1]='';
  memcpy(entity_7, entity_0, entity_5*sizeof(char));
}