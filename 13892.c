void fun()
{
  int entity_6 = 79;
  entity_6 = 13;
  char entity_3[94] = "";
  char entity_1[40] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'K', 94-1);
  entity_3[94-1]='0';
  memset(entity_1, 'D', 40-1);
  entity_1[40-1]='0';
  memcpy(entity_0, entity_1, 40*sizeof(char));
}