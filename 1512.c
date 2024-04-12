void fun()
{
  int entity_5 = 32;
  char entity_8[59] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_8, 'T', 59-1);
  entity_8[59-1]='';
  strcpy(entity_1, entity_8);
}