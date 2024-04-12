void fun()
{
  int entity_2 = 67;
  char entity_0[99] = "";
  char entity_1[entity_2] = "";
  char* entity_8;
  memset(entity_0, 'J', 99-1);
  entity_0[99-1]='0';
  memset(entity_1, 'n', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_1, entity_2*sizeof(char));
}