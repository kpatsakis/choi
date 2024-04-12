void fun()
{
  int entity_7 = 17;
  char entity_4[81] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_1[99] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  memset(entity_4, 'k', 81-1);
  entity_4[81-1]='';
  memset(entity_1, 'v', 99-1);
  entity_1[99-1]='';
  entity_1[entity_7] = 'N';
}