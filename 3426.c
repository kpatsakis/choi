void fun()
{
  int entity_5 = 82;
  char* entity_4;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_6, 'l', entity_5-1);
  entity_6[entity_5-1]='';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[22-1]='';
  strcpy(entity_4, entity_6);
}