void fun()
{
  int entity_7 = 25;
  entity_7 = 44;
  char entity_4[72] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'z', 72-1);
  entity_4[72-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  strcpy(entity_0, entity_4);
}