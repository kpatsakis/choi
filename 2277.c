void fun()
{
  int entity_6 = 80;
  char* entity_8;
  char entity_1[53] = "";
  entity_1 = NULL;
  char entity_5 = 'S';
  memset(entity_1, 'p', 53-1);
  entity_1[53-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  strcpy(entity_8, entity_1);
}