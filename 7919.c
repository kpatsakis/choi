void fun()
{
  char* entity_9;
  char entity_2[60] = "";
  entity_2 = NULL;
  char entity_4 = 'Q';
  char* entity_3;
  char entity_5 = 'w';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_2, 'k', 60-1);
  entity_2[60-1]='';
  strcpy(entity_3, entity_2);
}