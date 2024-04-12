void fun()
{
  int entity_6 = 25;
  int entity_8 = 60;
  entity_8 = 90;
  char entity_9[91] = "";
  char entity_7[86] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'T', 91-1);
  entity_9[91-1]='0';
  memset(entity_7, 'A', 86-1);
  entity_7[86-1]='0';
  memcpy(entity_4, entity_9, 91*sizeof(char));
}