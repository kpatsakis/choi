void fun()
{
  int entity_3 = 73;
  char* entity_9;
  char entity_6[entity_3] = "";
  char entity_0 = 'B';
  char entity_8 = 'n';
  char entity_1[82] = "";
  memset(entity_1, 'E', 82-1);
  entity_1[82-1]='0';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'v', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_3 = 1;
  memcpy(entity_9, entity_6, entity_3*sizeof(char));
}