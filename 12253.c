void fun()
{
  int entity_9 = 42;
  char* entity_3;
  char entity_4 = 'B';
  char entity_8[entity_9] = "";
  char* entity_0;
  char entity_7[68] = "";
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'A', entity_9-1);
  entity_8[entity_9-1]='0';
  memset(entity_7, 'i', 68-1);
  entity_7[68-1]='0';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_3, entity_8, entity_9*sizeof(char));
}