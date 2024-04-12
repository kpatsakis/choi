void fun()
{
  int entity_0 = 38;
  int entity_2 = 63;
  char entity_9[entity_0] = "";
  char* entity_3;
  char entity_1[78] = "";
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'y', entity_0-1);
  entity_9[entity_0-1]='0';
  memset(entity_1, 'E', 78-1);
  entity_1[78-1]='0';
  entity_0 = 43;
  strcpy(entity_3, entity_9);
}