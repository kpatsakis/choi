void fun()
{
  int entity_4 = 67;
  char* entity_1;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_5, 'E', 85-1);
  entity_5[85-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  strcpy(entity_1, entity_5);
}