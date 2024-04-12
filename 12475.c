void fun()
{
  int entity_3 = 49;
  char entity_8[entity_3] = "";
  char entity_6 = 'C';
  char entity_4[61] = "";
  char* entity_1;
  memset(entity_8, 'X', entity_3-1);
  entity_8[entity_3-1]='0';
  memset(entity_4, 'T', 61-1);
  entity_4[61-1]='0';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_8, entity_3*sizeof(char));
}