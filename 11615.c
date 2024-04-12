void fun()
{
  char entity_8[24] = "";
  char* entity_9;
  char entity_0[19] = "";
  memset(entity_8, 'P', 24-1);
  entity_8[24-1]='0';
  entity_9 = (char*)malloc(69*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'V', 19-1);
  entity_0[19-1]='0';
  memcpy(entity_9, entity_8, 24*sizeof(char));
}