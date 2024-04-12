void fun()
{
  int entity_1 = 80;
  char* entity_2;
  char entity_5[97] = "";
  entity_5 = NULL;
  char entity_8[90] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_8, 'r', 90-1);
  entity_8[90-1]='';
  memset(entity_5, 'm', 97-1);
  entity_5[97-1]='';
  strcpy(entity_2, entity_8);
}