void fun()
{
  int entity_7 = 67;
  int entity_4 = 38;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[66-1]='';
  memset(entity_5, 'F', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 78;
  entity_5[53] = 't';
}