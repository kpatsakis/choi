void fun()
{
  int entity_8 = 72;
  entity_8 = 35;
  char entity_3[41] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_3, 'k', 41-1);
  entity_3[41-1]='';
  strcpy(entity_6, entity_3);
}