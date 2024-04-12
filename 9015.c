void fun()
{
  int entity_1 = 77;
  entity_1 = 86;
  char entity_6[71] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'w', 71-1);
  entity_6[71-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_6);
}