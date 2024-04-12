void fun()
{
  int entity_4 = 3;
  char entity_6[29] = "";
  char entity_5[78] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'L', 29-1);
  entity_6[29-1]='0';
  memset(entity_5, 'T', 78-1);
  entity_5[78-1]='0';
  strcpy(entity_0, entity_5);
}