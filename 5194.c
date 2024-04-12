void fun()
{
  int entity_7 = 9;
  int entity_2 = 12;
  entity_7 = 86;
  char entity_9[99] = "";
  entity_9 = NULL;
  char entity_4 = 'Y';
  char* entity_3;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'B', 99-1);
  entity_9[99-1]='';
  strcpy(entity_3, entity_9);
}