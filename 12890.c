void fun()
{
  int entity_9 = 25;
  char entity_5[74] = "";
  char* entity_6;
  char entity_0[42] = "";
  memset(entity_0, 'A', 42-1);
  entity_0[42-1]='0';
  memset(entity_5, 'E', 74-1);
  entity_5[74-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_0, 42*sizeof(char));
}