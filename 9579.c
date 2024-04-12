void fun()
{
  int entity_7 = 2;
  int entity_1 = 30;
  char* entity_0;
  char entity_3[97] = "";
  entity_3 = NULL;
  memset(entity_3, 'l', 97-1);
  entity_3[97-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  strcpy(entity_0, entity_3);
}