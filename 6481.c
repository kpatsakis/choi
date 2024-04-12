void fun()
{
  int entity_5 = 26;
  char* entity_2;
  char entity_9[30] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 30-1);
  entity_9[30-1]='';
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[50-1]='';
  entity_9[entity_5] = 'X';
}