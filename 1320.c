void fun()
{
  int entity_5 = 50;
  char* entity_2;
  char entity_4[55] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_4, 'H', 55-1);
  entity_4[55-1]='';
  memcpy(entity_2, entity_4, 55*sizeof(char));
}