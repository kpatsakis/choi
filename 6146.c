void fun()
{
  int entity_1 = 53;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_5 = 'Z';
  memset(entity_8, 'c', entity_1-1);
  entity_8[entity_1-1]='';
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[63-1]='';
  entity_1 = 22;
  memcpy(entity_6, entity_8, entity_1*sizeof(char));
}