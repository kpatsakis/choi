void fun()
{
  int entity_5 = 51;
  char* entity_1;
  char entity_7[48] = "";
  char entity_8[64] = "";
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'g', 64-1);
  entity_8[64-1]='0';
  memset(entity_7, 'W', 48-1);
  entity_7[48-1]='0';
  memcpy(entity_1, entity_8, 64*sizeof(char));
}