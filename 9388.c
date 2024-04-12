void fun()
{
  int entity_6 = 74;
  char* entity_9;
  char entity_0 = 'X';
  char entity_2[33] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_2, 'B', 33-1);
  entity_2[33-1]='';
  memcpy(entity_9, entity_2, 33*sizeof(char));
}