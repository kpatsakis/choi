void fun()
{
  int entity_3 = 1;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'H', entity_3-1);
  entity_2[entity_3-1]='';
  entity_9 = (char*)malloc(33*sizeof(char));
  entity_9[33-1]='';
  entity_2[63] = 'X';
}