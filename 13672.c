void fun()
{
  int entity_3 = 93;
  entity_3 = 17;
  char entity_5[25] = "";
  char entity_8[12] = "";
  char* entity_0;
  memset(entity_5, 'Y', 25-1);
  entity_5[25-1]='0';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'I', 12-1);
  entity_8[12-1]='0';
  memcpy(entity_0, entity_8, 12*sizeof(char));
}