void fun()
{
  int entity_1 = 75;
  char entity_2[99] = "";
  char* entity_8;
  char entity_4[entity_1] = "";
  memset(entity_4, 'V', entity_1-1);
  entity_4[entity_1-1]='0';
  memset(entity_2, 'U', 99-1);
  entity_2[99-1]='0';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, entity_1*sizeof(char));
}