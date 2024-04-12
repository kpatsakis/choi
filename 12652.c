void fun()
{
  int entity_7 = 53;
  char entity_3[80] = "";
  char entity_0[20] = "";
  char* entity_2;
  memset(entity_3, 'L', 80-1);
  entity_3[80-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'M', 20-1);
  entity_0[20-1]='0';
  memcpy(entity_2, entity_0, 20*sizeof(char));
}