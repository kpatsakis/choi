void fun()
{
  int entity_9 = 92;
  int entity_8 = 77;
  char* entity_4;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'U', entity_8-1);
  entity_2[entity_8-1]='';
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[63-1]='';
  memcpy(entity_4, entity_2, entity_8*sizeof(char));
}