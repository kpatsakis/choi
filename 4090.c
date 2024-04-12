void fun()
{
  int entity_7 = 82;
  entity_7 = 56;
  char entity_5[77] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'T', 77-1);
  entity_5[77-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  strcpy(entity_2, entity_5);
}