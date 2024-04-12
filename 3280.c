void fun()
{
  int entity_2 = 64;
  char* entity_9;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_5[81] = "";
  entity_5 = NULL;
  memset(entity_3, 'V', 29-1);
  entity_3[29-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memset(entity_5, 'e', 81-1);
  entity_5[81-1]='';
  entity_2 = 12;
  entity_3[entity_2] = 'h';
}