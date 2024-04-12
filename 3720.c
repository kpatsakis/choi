void fun()
{
  int entity_4 = 22;
  int entity_2 = 94;
  char entity_8[27] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'l', 27-1);
  entity_8[27-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_4 = 65;
  strcpy(entity_5, entity_8);
}