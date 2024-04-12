void fun()
{
  int entity_4 = 98;
  char* entity_2;
  char entity_8[42] = "";
  char entity_1[entity_4] = "";
  memset(entity_1, 'o', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'V', 42-1);
  entity_8[42-1]='0';
  entity_4 = 92;
  memcpy(entity_2, entity_1, entity_4*sizeof(char));
}