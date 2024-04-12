void fun()
{
  char entity_1 = 'm';
  char* entity_3;
  char entity_8[78] = "";
  entity_8 = NULL;
  char entity_0[95] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', 95-1);
  entity_0[95-1]='';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  memset(entity_8, 'K', 78-1);
  entity_8[78-1]='';
  strcpy(entity_3, entity_8);
}