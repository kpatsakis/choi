void fun()
{
  int entity_6 = 64;
  entity_6 = 74;
  char entity_0[41] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'Q', 41-1);
  entity_0[41-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_0);
}