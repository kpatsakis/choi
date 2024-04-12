void fun()
{
  char entity_7 = 'H';
  char entity_0 = 'h';
  char entity_3[32] = "";
  char* entity_1;
  char entity_8[17] = "";
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'p', 17-1);
  entity_8[17-1]='0';
  memset(entity_3, 'i', 32-1);
  entity_3[32-1]='0';
  memcpy(entity_1, entity_8, 17*sizeof(char));
}