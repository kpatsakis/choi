void fun()
{
  int entity_5 = 33;
  int entity_1 = 68;
  char entity_9[90] = "";
  char entity_4 = 'q';
  char entity_6[66] = "";
  char* entity_8;
  memset(entity_9, 'l', 90-1);
  entity_9[90-1]='0';
  memset(entity_6, 'd', 66-1);
  entity_6[66-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, 66*sizeof(char));
}