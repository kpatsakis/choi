void fun()
{
  int entity_8 = 53;
  char entity_2[87] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_0[35] = "";
  entity_0 = NULL;
  memset(entity_2, 'F', 87-1);
  entity_2[87-1]='';
  memset(entity_0, 'J', 35-1);
  entity_0[35-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  entity_8 = 54;
  strcpy(entity_7, entity_2);
}