void fun()
{
  int entity_3 = 54;
  char* entity_1;
  char entity_5[71] = "";
  char entity_8[24] = "";
  memset(entity_8, 'p', 24-1);
  entity_8[24-1]='0';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'j', 71-1);
  entity_5[71-1]='0';
  memcpy(entity_1, entity_8, 24*sizeof(char));
}