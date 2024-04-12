void fun()
{
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  memset(entity_2, 'P', 97-1);
  entity_2[97-1]='';
  strcpy(entity_1, entity_2);
}