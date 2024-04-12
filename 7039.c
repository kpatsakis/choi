void fun()
{
  int entity_5 = 25;
  int entity_0 = 9;
  char entity_4[41] = "";
  entity_4 = NULL;
  char entity_2[5] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_4, 'L', 41-1);
  entity_4[41-1]='';
  memset(entity_2, 'N', 5-1);
  entity_2[5-1]='';
  strcpy(entity_8, entity_4);
}