void fun()
{
  int entity_7 = 1;
  char entity_3[10] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'A', 10-1);
  entity_3[10-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  strcpy(entity_5, entity_3);
}