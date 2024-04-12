void fun()
{
  int entity_2 = 23;
  int entity_4 = 96;
  char* entity_6;
  char entity_1[entity_2] = "";
  char* entity_0;
  memset(entity_1, 'R', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[0]='0';
  entity_2 = 99;
  strcpy(entity_6, entity_1);
}