void fun()
{
  int entity_0 = 7;
  char entity_4 = 'a';
  char entity_1[93] = "";
  entity_1 = NULL;
  char entity_3[7] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_3, 'm', 7-1);
  entity_3[7-1]='';
  memset(entity_1, 'g', 93-1);
  entity_1[93-1]='';
  strcpy(entity_8, entity_3);
}