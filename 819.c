void fun()
{
  int entity_4 = 59;
  entity_4 = 40;
  char entity_5[55] = "";
  entity_5 = NULL;
  char entity_6 = 'g';
  char* entity_8;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_5, 'u', 55-1);
  entity_5[55-1]='';
  strcpy(entity_8, entity_5);
}