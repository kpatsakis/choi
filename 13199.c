void fun()
{
  int entity_1 = 79;
  int entity_6 = 55;
  entity_1 = 5;
  char* entity_9;
  char entity_0[44] = "";
  memset(entity_0, 'x', 44-1);
  entity_0[44-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_0, 44*sizeof(char));
}