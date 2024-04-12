void fun()
{
  int entity_6 = 61;
  char entity_8[9] = "";
  char* entity_9;
  char entity_5[42] = "";
  char entity_0[90] = "";
  memset(entity_5, 'R', 42-1);
  entity_5[42-1]='0';
  memset(entity_0, 'h', 90-1);
  entity_0[90-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'z', 9-1);
  entity_8[9-1]='0';
  entity_6 = 21;
  strcpy(entity_9, entity_5);
}