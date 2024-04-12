void fun()
{
  int entity_3 = 7;
  char entity_8[91] = "";
  char entity_6 = 'H';
  char* entity_5;
  char* entity_0;
  memset(entity_8, 'q', 91-1);
  entity_8[91-1]='0';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_0, entity_8, 91*sizeof(char));
}