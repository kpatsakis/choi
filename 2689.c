void fun()
{
  int entity_4 = 32;
  char* entity_8;
  char entity_3[6] = "";
  entity_3 = NULL;
  char entity_7 = 'l';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_3, 'x', 6-1);
  entity_3[6-1]='';
  strcpy(entity_8, entity_3);
}