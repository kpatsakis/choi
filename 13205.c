void fun()
{
  int entity_3 = 24;
  char* entity_4;
  char entity_2[12] = "";
  char entity_5[95] = "";
  char entity_1[34] = "";
  memset(entity_1, 'i', 34-1);
  entity_1[34-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'V', 12-1);
  entity_2[12-1]='0';
  memset(entity_5, 'j', 95-1);
  entity_5[95-1]='0';
  entity_3 = 73;
  memcpy(entity_4, entity_1, 34*sizeof(char));
}