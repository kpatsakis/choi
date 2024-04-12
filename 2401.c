void fun()
{
  int entity_5 = 7;
  char* entity_7;
  char entity_1[9] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memset(entity_1, 'J', 9-1);
  entity_1[9-1]='';
  entity_1[15] = 'V';
}