void fun()
{
  char entity_0[37] = "";
  char entity_1[44] = "";
  char* entity_4;
  memset(entity_0, 'E', 37-1);
  entity_0[37-1]='0';
  memset(entity_1, 'R', 44-1);
  entity_1[44-1]='0';
  entity_4 = (char*)malloc(94*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_0, 37*sizeof(char));
}