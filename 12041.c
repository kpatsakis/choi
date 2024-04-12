void fun()
{
  int entity_4 = 36;
  char entity_8[entity_4] = "";
  char entity_5[34] = "";
  char* entity_1;
  memset(entity_5, 'w', 34-1);
  entity_5[34-1]='0';
  memset(entity_8, 'g', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_8, entity_4*sizeof(char));
}