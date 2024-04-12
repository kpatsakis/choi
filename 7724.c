void fun()
{
  int entity_6 = 6;
  char* entity_8;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char entity_3 = 'n';
  char entity_5[6] = "";
  entity_5 = NULL;
  memset(entity_5, 'f', 6-1);
  entity_5[6-1]='';
  memset(entity_2, 'i', entity_6-1);
  entity_2[entity_6-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  entity_6 = 25;
  strcpy(entity_8, entity_2);
}