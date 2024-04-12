void fun()
{
  int entity_0 = 41;
  int entity_9 = 59;
  char entity_4 = 'E';
  char entity_6[entity_0] = "";
  char* entity_2;
  char* entity_8;
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'T', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_2, entity_6, entity_0*sizeof(char));
}