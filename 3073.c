void fun()
{
  int entity_4 = 5;
  char entity_1[57] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 's', 57-1);
  entity_1[57-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  strcpy(entity_5, entity_1);
}