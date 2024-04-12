void fun()
{
  char entity_5 = 't';
  char entity_3[49] = "";
  char* entity_8;
  char entity_4[69] = "";
  memset(entity_4, 'Z', 69-1);
  entity_4[69-1]='0';
  memset(entity_3, 'k', 49-1);
  entity_3[49-1]='0';
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_3, 49*sizeof(char));
}