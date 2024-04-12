void fun()
{
  char entity_3[22] = "";
  char entity_1[18] = "";
  char* entity_2;
  memset(entity_3, 'Z', 22-1);
  entity_3[22-1]='0';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'G', 18-1);
  entity_1[18-1]='0';
  entity_1[2] = 'p';
}