void fun()
{
  char entity_1[10] = "";
  char* entity_0;
  char entity_8[52] = "";
  char entity_3[15] = "";
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'z', 52-1);
  entity_8[52-1]='0';
  memset(entity_1, 'E', 10-1);
  entity_1[10-1]='0';
  memset(entity_3, 'r', 15-1);
  entity_3[15-1]='0';
  memcpy(entity_0, entity_3, 15*sizeof(char));
}