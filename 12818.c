void fun()
{
  int entity_6 = 96;
  char* entity_5;
  char entity_3[86] = "";
  char entity_0[80] = "";
  char* entity_2;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'W', 80-1);
  entity_0[80-1]='0';
  memset(entity_3, 'H', 86-1);
  entity_3[86-1]='0';
  memcpy(entity_5, entity_3, 86*sizeof(char));
}