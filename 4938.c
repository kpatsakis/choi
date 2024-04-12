void fun()
{
  int entity_4 = 100;
  entity_4 = 95;
  char* entity_6;
  char entity_0[61] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_0, 'V', 61-1);
  entity_0[61-1]='';
  strcpy(entity_6, entity_0);
}