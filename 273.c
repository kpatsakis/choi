void fun()
{
  int entity_5 = 7;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_9 = 'k';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  memset(entity_6, 'A', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_4, entity_6);
}