void fun()
{
  int entity_0 = 25;
  char entity_6[entity_0] = "";
  char* entity_9;
  char entity_3 = 'r';
  char entity_1 = 'S';
  char entity_2[15] = "";
  memset(entity_2, 'D', 15-1);
  entity_2[15-1]='0';
  entity_9 = (char*)malloc(33*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'd', entity_0-1);
  entity_6[entity_0-1]='0';
  memcpy(entity_9, entity_6, entity_0*sizeof(char));
}