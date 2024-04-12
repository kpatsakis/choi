void fun()
{
  char* entity_4;
  char entity_3[56] = "";
  char entity_2[97] = "";
  char entity_5 = 'R';
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'L', 56-1);
  entity_3[56-1]='0';
  memset(entity_2, 'f', 97-1);
  entity_2[97-1]='0';
  entity_3[98] = 'F';
}