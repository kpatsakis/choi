void fun()
{
  int entity_7 = 47;
  char entity_1[67] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_1, 'k', 67-1);
  entity_1[67-1]='';
  entity_7 = 36;
  strcpy(entity_5, entity_1);
}