void fun()
{
  int entity_9 = 33;
  char* entity_4;
  char* entity_6;
  char entity_0[62] = "";
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'E', 62-1);
  entity_0[62-1]='0';
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_4, entity_0, 62*sizeof(char));
}