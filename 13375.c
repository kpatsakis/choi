void fun()
{
  int entity_0 = 14;
  char entity_2[10] = "";
  char entity_5[37] = "";
  char entity_3[35] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'Q', 10-1);
  entity_2[10-1]='0';
  memset(entity_5, 'f', 37-1);
  entity_5[37-1]='0';
  memset(entity_3, 'T', 35-1);
  entity_3[35-1]='0';
  entity_0 = 83;
  memcpy(entity_8, entity_3, 35*sizeof(char));
}