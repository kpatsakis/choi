void fun()
{
  int entity_6 = 70;
  char entity_4[37] = "";
  char* entity_0;
  char entity_9[28] = "";
  char* entity_5;
  memset(entity_9, 'L', 28-1);
  entity_9[28-1]='0';
  memset(entity_4, 'J', 37-1);
  entity_4[37-1]='0';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 37*sizeof(char));
}