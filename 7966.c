void fun()
{
  int entity_4 = 95;
  char entity_3[14] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_3, 'E', 14-1);
  entity_3[14-1]='';
  strcpy(entity_5, entity_3);
}