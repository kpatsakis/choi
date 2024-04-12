void fun()
{
  int entity_2 = 24;
  char* entity_4;
  char entity_1[9] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 9-1);
  entity_1[9-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_1, 9*sizeof(char));
}