void fun()
{
  int entity_9 = 71;
  char entity_3[49] = "";
  char* entity_5;
  char entity_0[94] = "";
  memset(entity_0, 'V', 94-1);
  entity_0[94-1]='0';
  memset(entity_3, 'A', 49-1);
  entity_3[49-1]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, 49*sizeof(char));
}