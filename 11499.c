void fun()
{
  char entity_8[20] = "";
  char entity_7[61] = "";
  char* entity_4;
  memset(entity_7, 'x', 61-1);
  entity_7[61-1]='0';
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'y', 20-1);
  entity_8[20-1]='0';
  memcpy(entity_4, entity_7, 61*sizeof(char));
}