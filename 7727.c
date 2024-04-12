void fun()
{
  int entity_2 = 2;
  char* entity_6;
  char entity_9[21] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[65-1]='';
  memset(entity_9, 'R', 21-1);
  entity_9[21-1]='';
  strcpy(entity_6, entity_9);
}