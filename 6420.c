void fun()
{
  int entity_6 = 41;
  int entity_8 = 10;
  char* entity_1;
  char entity_5[97] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 97-1);
  entity_5[97-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_6 = 6;
  strcpy(entity_1, entity_5);
}