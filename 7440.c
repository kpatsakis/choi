void fun()
{
  int entity_2 = 22;
  char entity_9[67] = "";
  entity_9 = NULL;
  char entity_8[57] = "";
  entity_8 = NULL;
  char entity_7 = 'r';
  char* entity_6;
  memset(entity_8, 'K', 57-1);
  entity_8[57-1]='';
  memset(entity_9, 'i', 67-1);
  entity_9[67-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_2 = 50;
  strcpy(entity_6, entity_9);
}