void fun()
{
  int entity_7 = 84;
  char entity_2 = 'p';
  char* entity_1;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'v', entity_7-1);
  entity_4[entity_7-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}