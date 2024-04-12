void fun()
{
  int entity_0 = 58;
  char* entity_8;
  char entity_5[10] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_5, 'Q', 10-1);
  entity_5[10-1]='';
  strcpy(entity_8, entity_5);
}