void fun()
{
  int entity_0 = 96;
  char* entity_4;
  char entity_1[42] = "";
  char entity_3[entity_0] = "";
  memset(entity_3, 'l', entity_0-1);
  entity_3[entity_0-1]='0';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'V', 42-1);
  entity_1[42-1]='0';
  memcpy(entity_4, entity_3, entity_0*sizeof(char));
}