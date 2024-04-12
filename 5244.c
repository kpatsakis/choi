void fun()
{
  int entity_5 = 95;
  entity_5 = 61;
  char entity_1[56] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_1, 'e', 56-1);
  entity_1[56-1]='';
  strcpy(entity_8, entity_1);
}