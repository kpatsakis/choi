void fun()
{
  int entity_2 = 96;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_5[77] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'k', 77-1);
  entity_5[77-1]='';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[23-1]='';
  memset(entity_6, 'h', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[11] = 'Y';
}