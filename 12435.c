void fun()
{
  int entity_0 = 91;
  int entity_1 = 53;
  char entity_4[26] = "";
  char* entity_3;
  char entity_5 = 'g';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'A', 26-1);
  entity_4[26-1]='0';
  memcpy(entity_3, entity_4, 26*sizeof(char));
}