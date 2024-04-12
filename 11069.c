void fun()
{
  char entity_0 = 'Y';
  char* entity_1;
  char entity_6[21] = "";
  char entity_2[34] = "";
  memset(entity_2, 'P', 34-1);
  entity_2[34-1]='0';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'p', 21-1);
  entity_6[21-1]='0';
  memcpy(entity_1, entity_2, 34*sizeof(char));
}