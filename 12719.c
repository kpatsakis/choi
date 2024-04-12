void fun()
{
  int entity_8 = 95;
  int entity_1 = 87;
  char entity_0[entity_1] = "";
  char entity_9[36] = "";
  char* entity_2;
  char entity_3 = 'h';
  memset(entity_9, 'r', 36-1);
  entity_9[36-1]='0';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'T', entity_1-1);
  entity_0[entity_1-1]='0';
  strcpy(entity_2, entity_0);
}