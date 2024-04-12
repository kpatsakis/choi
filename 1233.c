void fun()
{
  int entity_5 = 10;
  entity_5 = 45;
  char entity_7[7] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'b', 7-1);
  entity_7[7-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  strcpy(entity_8, entity_7);
}