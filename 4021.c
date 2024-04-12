void fun()
{
  int entity_0 = 81;
  int entity_4 = 73;
  entity_4 = 82;
  char entity_7[5] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'm', 5-1);
  entity_7[5-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_7);
}