void fun()
{
  int entity_4 = 37;
  int entity_6 = 42;
  entity_6 = 77;
  char* entity_0;
  char entity_1 = 'E';
  char entity_3[entity_6] = "";
  char entity_7[6] = "";
  memset(entity_3, 'k', entity_6-1);
  entity_3[entity_6-1]='0';
  memset(entity_7, 'y', 6-1);
  entity_7[6-1]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_3, entity_6*sizeof(char));
}