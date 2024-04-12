void fun()
{
  int entity_2 = 72;
  char* entity_8;
  char entity_7[54] = "";
  char entity_0[17] = "";
  memset(entity_7, 'w', 54-1);
  entity_7[54-1]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'l', 17-1);
  entity_0[17-1]='0';
  memcpy(entity_8, entity_0, 17*sizeof(char));
}