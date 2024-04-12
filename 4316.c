void fun()
{
  int entity_2 = 74;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char entity_7 = 'f';
  char* entity_8;
  memset(entity_1, 'x', entity_2-1);
  entity_1[entity_2-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memcpy(entity_8, entity_1, entity_2*sizeof(char));
}