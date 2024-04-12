void fun()
{
  char entity_8[37] = "";
  char entity_6[19] = "";
  char entity_5[71] = "";
  char* entity_0;
  memset(entity_5, 'w', 71-1);
  entity_5[71-1]='0';
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'l', 37-1);
  entity_8[37-1]='0';
  memset(entity_6, 'i', 19-1);
  entity_6[19-1]='0';
  strcpy(entity_0, entity_6);
}