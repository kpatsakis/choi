void fun()
{
  int entity_9 = 7;
  int entity_7 = 57;
  int entity_5 = 45;
  char entity_3[91] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'V', 91-1);
  entity_3[91-1]='0';
  memcpy(entity_4, entity_3, 91*sizeof(char));
}