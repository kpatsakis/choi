void fun()
{
  int entity_5 = 91;
  entity_5 = 21;
  char entity_7[2] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'y', 2-1);
  entity_7[2-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  strcpy(entity_8, entity_7);
}