void fun()
{
  int entity_2 = 81;
  char entity_4[entity_2] = "";
  char entity_5[41] = "";
  char entity_9 = 'U';
  char* entity_0;
  memset(entity_4, 'g', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'y', 41-1);
  entity_5[41-1]='0';
  entity_2 = 98;
  memcpy(entity_0, entity_4, entity_2*sizeof(char));
}