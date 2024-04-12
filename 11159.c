void fun()
{
  char entity_3[75] = "";
  char entity_8[23] = "";
  char* entity_1;
  char entity_5 = 'S';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'z', 23-1);
  entity_8[23-1]='0';
  memset(entity_3, 'j', 75-1);
  entity_3[75-1]='0';
  memcpy(entity_1, entity_3, 75*sizeof(char));
}