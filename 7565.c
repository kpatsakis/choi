void fun()
{
  int entity_9 = 11;
  int entity_6 = 80;
  char* entity_0;
  char entity_8[21] = "";
  entity_8 = NULL;
  char entity_2[76] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_2, 'N', 76-1);
  entity_2[76-1]='';
  memset(entity_8, 'L', 21-1);
  entity_8[21-1]='';
  entity_6 = 98;
  strcpy(entity_0, entity_8);
}