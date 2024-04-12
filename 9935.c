void fun()
{
  int entity_4 = 73;
  char* entity_3;
  char entity_1[68] = "";
  entity_1 = NULL;
  memset(entity_1, 'K', 68-1);
  entity_1[68-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  strcpy(entity_3, entity_1);
}