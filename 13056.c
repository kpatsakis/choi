void fun()
{
  int entity_2 = 38;
  entity_2 = 7;
  char* entity_4;
  char* entity_6;
  char entity_1[91] = "";
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'x', 91-1);
  entity_1[91-1]='0';
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_4, entity_1, 91*sizeof(char));
}