void fun()
{
  int entity_0 = 61;
  char entity_1 = 'p';
  char entity_3[40] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_6[68] = "";
  entity_6 = NULL;
  memset(entity_6, 'N', 68-1);
  entity_6[68-1]='';
  memset(entity_3, 'M', 40-1);
  entity_3[40-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_3);
}