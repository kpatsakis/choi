void fun()
{
  int entity_4 = 21;
  char entity_5[99] = "";
  entity_5 = NULL;
  char entity_2 = 'G';
  char* entity_6;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_5, 'C', 99-1);
  entity_5[99-1]='';
  strcpy(entity_6, entity_5);
}