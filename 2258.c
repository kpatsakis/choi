void fun()
{
  int entity_1 = 84;
  char* entity_9;
  char entity_2[27] = "";
  entity_2 = NULL;
  char entity_0[3] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', 3-1);
  entity_0[3-1]='';
  memset(entity_2, 'c', 27-1);
  entity_2[27-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memcpy(entity_9, entity_0, 3*sizeof(char));
}