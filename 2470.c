void fun()
{
  int entity_5 = 14;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'R', entity_5-1);
  entity_0[entity_5-1]='';
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[62-1]='';
  entity_5 = 27;
  strcpy(entity_7, entity_0);
}