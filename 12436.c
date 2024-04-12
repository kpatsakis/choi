void fun()
{
  int entity_3 = 71;
  int entity_4 = 11;
  int entity_6 = 90;
  char entity_0[2] = "";
  char entity_9[14] = "";
  char* entity_7;
  memset(entity_0, 'E', 2-1);
  entity_0[2-1]='0';
  memset(entity_9, 'h', 14-1);
  entity_9[14-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}