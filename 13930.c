void fun()
{
  int entity_5 = 1;
  char* entity_6;
  char entity_9 = 'z';
  char entity_8[91] = "";
  memset(entity_8, 'o', 91-1);
  entity_8[91-1]='0';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  entity_5 = 42;
  memcpy(entity_6, entity_8, 91*sizeof(char));
}