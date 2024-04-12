void fun()
{
  int entity_4 = 95;
  int entity_9 = 54;
  entity_4 = 17;
  char* entity_1;
  char entity_3 = 'F';
  char entity_2[entity_4] = "";
  char entity_0[12] = "";
  memset(entity_0, 'N', 12-1);
  entity_0[12-1]='0';
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'S', entity_4-1);
  entity_2[entity_4-1]='0';
  memcpy(entity_1, entity_2, entity_4*sizeof(char));
}