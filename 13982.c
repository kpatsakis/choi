void fun()
{
  int entity_8 = 31;
  int entity_6 = 31;
  int entity_4 = 43;
  char entity_2[3] = "";
  char entity_1[70] = "";
  char* entity_0;
  memset(entity_2, 'P', 3-1);
  entity_2[3-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'M', 70-1);
  entity_1[70-1]='0';
  entity_4 = 49;
  strcpy(entity_0, entity_1);
}