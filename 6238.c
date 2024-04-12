void fun()
{
  int entity_2 = 24;
  char entity_3[26] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'B', 26-1);
  entity_3[26-1]='';
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[60-1]='';
  strcpy(entity_5, entity_3);
}