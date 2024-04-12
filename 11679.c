void fun()
{
  char entity_6 = 'a';
  char entity_1[88] = "";
  char entity_2[63] = "";
  char* entity_3;
  char entity_7[10] = "";
  memset(entity_2, 'T', 63-1);
  entity_2[63-1]='0';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'x', 10-1);
  entity_7[10-1]='0';
  memset(entity_1, 'E', 88-1);
  entity_1[88-1]='0';
  strcpy(entity_3, entity_2);
}