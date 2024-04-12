void fun()
{
  int entity_2 = 32;
  char* entity_6;
  char entity_9[73] = "";
  entity_9 = NULL;
  char entity_8 = 'M';
  memset(entity_9, 'C', 73-1);
  entity_9[73-1]='';
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[15-1]='';
  entity_9[entity_2] = 'e';
}