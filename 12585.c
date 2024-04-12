void fun()
{
  int entity_9 = 29;
  char* entity_2;
  char entity_8[entity_9] = "";
  char entity_4[91] = "";
  memset(entity_8, 'N', entity_9-1);
  entity_8[entity_9-1]='0';
  memset(entity_4, 'L', 91-1);
  entity_4[91-1]='0';
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_8);
}