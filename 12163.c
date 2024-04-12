void fun()
{
  int entity_1 = 95;
  char entity_5[48] = "";
  char entity_7[6] = "";
  char entity_8[83] = "";
  char* entity_2;
  char* entity_0;
  memset(entity_7, 'J', 6-1);
  entity_7[6-1]='0';
  memset(entity_8, 'k', 83-1);
  entity_8[83-1]='0';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'a', 48-1);
  entity_5[48-1]='0';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_2, entity_8);
}