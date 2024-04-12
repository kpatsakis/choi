void fun()
{
  int entity_8 = 3;
  char* entity_1;
  char entity_3[34] = "";
  char entity_5[entity_8] = "";
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'q', entity_8-1);
  entity_5[entity_8-1]='0';
  memset(entity_3, 'x', 34-1);
  entity_3[34-1]='0';
  memcpy(entity_1, entity_5, entity_8*sizeof(char));
}