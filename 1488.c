void fun()
{
  int entity_5 = 23;
  char entity_8[46] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_8, 'k', 46-1);
  entity_8[46-1]='';
  entity_5 = 66;
  strcpy(entity_3, entity_8);
}