void fun()
{
  int entity_9 = 17;
  char entity_5[56] = "";
  char* entity_0;
  char* entity_6;
  memset(entity_5, 'J', 56-1);
  entity_5[56-1]='0';
  entity_6 = (char*)malloc(39*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_5, 56*sizeof(char));
}