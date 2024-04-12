void fun()
{
  char entity_3[46] = "";
  char* entity_2;
  char entity_1[47] = "";
  char entity_4[37] = "";
  memset(entity_3, 'R', 46-1);
  entity_3[46-1]='0';
  memset(entity_1, 'G', 47-1);
  entity_1[47-1]='0';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'f', 37-1);
  entity_4[37-1]='0';
  entity_4[89] = 'd';
}