void fun()
{
  int entity_4 = 66;
  char* entity_5;
  char entity_0[80] = "";
  char entity_7[entity_4] = "";
  char entity_2 = 'f';
  char* entity_8;
  memset(entity_0, 'v', 80-1);
  entity_0[80-1]='0';
  memset(entity_7, 'T', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_8, entity_7);
}