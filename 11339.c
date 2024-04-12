void fun()
{
  char entity_6[50] = "";
  char entity_0[69] = "";
  char* entity_5;
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'G', 69-1);
  entity_0[69-1]='0';
  memset(entity_6, 'E', 50-1);
  entity_6[50-1]='0';
  memcpy(entity_5, entity_0, 69*sizeof(char));
}