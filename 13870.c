void fun()
{
  int entity_0 = 84;
  entity_0 = 32;
  char* entity_1;
  char entity_4[76] = "";
  char entity_3[entity_0] = "";
  memset(entity_3, 'Q', entity_0-1);
  entity_3[entity_0-1]='0';
  memset(entity_4, 'b', 76-1);
  entity_4[76-1]='0';
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_3, entity_0*sizeof(char));
}