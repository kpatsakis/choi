void fun()
{
  int entity_1 = 0;
  char entity_9 = 'C';
  char* entity_7;
  char entity_5[40] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  memset(entity_5, 'o', 40-1);
  entity_5[40-1]='';
  strcpy(entity_7, entity_5);
}