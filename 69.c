void fun()
{
  int entity_6 = 42;
  entity_6 = 4;
  char entity_8[71] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'f', 71-1);
  entity_8[71-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_8);
}