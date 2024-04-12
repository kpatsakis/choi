void fun()
{
  char entity_1[15] = "";
  char entity_2[40] = "";
  char* entity_8;
  memset(entity_1, 'A', 15-1);
  entity_1[15-1]='0';
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'R', 40-1);
  entity_2[40-1]='0';
  strcpy(entity_8, entity_1);
}