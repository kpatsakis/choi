void fun()
{
  int entity_2 = 28;
  int entity_7 = 14;
  char* entity_5;
  char entity_8[77] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', 77-1);
  entity_8[77-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  strcpy(entity_5, entity_8);
}