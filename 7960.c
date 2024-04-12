void fun()
{
  int entity_5 = 51;
  entity_5 = 42;
  char entity_7[17] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_7, 'h', 17-1);
  entity_7[17-1]='';
  strcpy(entity_4, entity_7);
}