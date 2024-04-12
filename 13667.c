void fun()
{
  int entity_8 = 17;
  char* entity_5;
  char entity_4[entity_8] = "";
  memset(entity_4, 'a', entity_8-1);
  entity_4[entity_8-1]='0';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[0]='0';
  entity_8 = 88;
  memcpy(entity_5, entity_4, entity_8*sizeof(char));
}