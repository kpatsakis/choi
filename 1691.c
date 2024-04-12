void fun()
{
  int entity_7 = 62;
  int entity_8 = 88;
  char entity_2[31] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_1[11] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[58-1]='';
  memset(entity_1, 'z', 11-1);
  entity_1[11-1]='';
  memset(entity_2, 'y', 31-1);
  entity_2[31-1]='';
  strcpy(entity_0, entity_2);
}