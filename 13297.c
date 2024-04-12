void fun()
{
  int entity_6 = 1;
  char entity_0[91] = "";
  char entity_8[entity_6] = "";
  char* entity_3;
  char* entity_2;
  char entity_9 = 'R';
  memset(entity_0, 'U', 91-1);
  entity_0[91-1]='0';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[0]='0';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'w', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_6 = 90;
  strcpy(entity_3, entity_8);
}