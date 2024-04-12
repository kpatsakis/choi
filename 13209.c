void fun()
{
  int entity_9 = 51;
  int entity_7 = 18;
  entity_7 = 42;
  char* entity_6;
  char* entity_0;
  char entity_5[81] = "";
  memset(entity_5, 'q', 81-1);
  entity_5[81-1]='0';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[0]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, 81*sizeof(char));
}