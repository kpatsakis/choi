void fun()
{
  int entity_0 = 64;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_8[40] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_3, 'X', entity_0-1);
  entity_3[entity_0-1]='';
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[15-1]='';
  memset(entity_8, 'e', 40-1);
  entity_8[40-1]='';
  strcpy(entity_6, entity_3);
}