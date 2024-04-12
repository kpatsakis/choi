void fun()
{
  int entity_2 = 69;
  entity_2 = 96;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char entity_9[4] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'k', 4-1);
  entity_9[4-1]='';
  memset(entity_1, 'O', entity_2-1);
  entity_1[entity_2-1]='';
  entity_4 = (char*)malloc(82*sizeof(char));
  entity_4[82-1]='';
  memcpy(entity_4, entity_1, entity_2*sizeof(char));
}