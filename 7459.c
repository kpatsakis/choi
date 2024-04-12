void fun()
{
  int entity_1 = 68;
  char* entity_8;
  char entity_7[71] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_7, 'p', 71-1);
  entity_7[71-1]='';
  entity_1 = 9;
  strcpy(entity_8, entity_7);
}