void fun()
{
  int entity_9 = 15;
  int entity_1 = 66;
  char entity_0[6] = "";
  char entity_5 = 'd';
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'p', 6-1);
  entity_0[6-1]='0';
  memcpy(entity_4, entity_0, 6*sizeof(char));
}