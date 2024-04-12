void fun()
{
  int entity_8 = 63;
  char entity_7[54] = "";
  char entity_4[58] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'D', 58-1);
  entity_4[58-1]='0';
  memset(entity_7, 'Z', 54-1);
  entity_7[54-1]='0';
  memcpy(entity_1, entity_7, 54*sizeof(char));
}