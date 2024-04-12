void fun()
{
  int entity_1 = 95;
  char* entity_6;
  char entity_5 = 't';
  char entity_2[77] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', 77-1);
  entity_2[77-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_1 = 56;
  strcpy(entity_6, entity_2);
}