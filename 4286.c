void fun()
{
  int entity_4 = 85;
  int entity_7 = 51;
  char* entity_8;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  memset(entity_6, 'A', entity_4-1);
  entity_6[entity_4-1]='';
  strcpy(entity_8, entity_6);
}