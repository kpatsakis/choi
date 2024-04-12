void fun()
{
  int entity_0 = 79;
  int entity_1 = 84;
  char entity_2[12] = "";
  char entity_8[entity_1] = "";
  char* entity_4;
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'j', 12-1);
  entity_2[12-1]='0';
  memset(entity_8, 'j', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_1 = 74;
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}