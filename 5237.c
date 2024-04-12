void fun()
{
  int entity_4 = 12;
  char* entity_8;
  char entity_5[87] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_5, 'D', 87-1);
  entity_5[87-1]='';
  strcpy(entity_8, entity_5);
}