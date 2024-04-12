void fun()
{
  int entity_0 = 40;
  entity_0 = 36;
  char entity_4[17] = "";
  char* entity_9;
  char entity_6 = 'S';
  memset(entity_4, 't', 17-1);
  entity_4[17-1]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_4, 17*sizeof(char));
}