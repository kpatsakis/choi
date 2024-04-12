void fun()
{
  int entity_2 = 26;
  char entity_0[entity_2] = "";
  char entity_8[94] = "";
  char* entity_4;
  memset(entity_8, 'V', 94-1);
  entity_8[94-1]='0';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'u', entity_2-1);
  entity_0[entity_2-1]='0';
  entity_2 = 28;
  memcpy(entity_4, entity_0, entity_2*sizeof(char));
}