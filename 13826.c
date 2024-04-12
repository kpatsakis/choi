void fun()
{
  int entity_4 = 5;
  int entity_0 = 6;
  entity_4 = 55;
  char* entity_5;
  char entity_9[60] = "";
  char entity_3[86] = "";
  memset(entity_3, 'c', 86-1);
  entity_3[86-1]='0';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'd', 60-1);
  entity_9[60-1]='0';
  memcpy(entity_5, entity_3, 86*sizeof(char));
}