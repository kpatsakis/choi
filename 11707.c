void fun()
{
  int entity_6 = 57;
  char entity_0[73] = "";
  char entity_4[84] = "";
  char entity_2 = 'V';
  char* entity_1;
  entity_1 = (char*)malloc(5*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'M', 73-1);
  entity_0[73-1]='0';
  memset(entity_4, 'z', 84-1);
  entity_4[84-1]='0';
  strcpy(entity_1, entity_4);
}