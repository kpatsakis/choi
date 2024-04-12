void fun()
{
  int entity_1 = 96;
  entity_1 = 90;
  char* entity_8;
  char entity_4[51] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', 51-1);
  entity_4[51-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_4);
}