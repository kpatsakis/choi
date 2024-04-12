void fun()
{
  int entity_9 = 82;
  char* entity_0;
  char entity_6[13] = "";
  char* entity_4;
  char entity_5 = 'F';
  memset(entity_6, 'l', 13-1);
  entity_6[13-1]='0';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_0, entity_6, 13*sizeof(char));
}