void fun()
{
  int entity_7 = 53;
  char* entity_4;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'F', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  entity_7 = 25;
  strcpy(entity_4, entity_5);
}