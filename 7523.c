void fun()
{
  char entity_5[67] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_0[58] = "";
  entity_0 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_5, 'p', 67-1);
  entity_5[67-1]='';
  memset(entity_7, 'b', 15-1);
  entity_7[15-1]='';
  memset(entity_0, 'f', 58-1);
  entity_0[58-1]='';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[99-1]='';
  strcpy(entity_9, entity_5);
}