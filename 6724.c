void fun()
{
  int entity_3 = 14;
  int entity_9 = 49;
  char* entity_5;
  char entity_6 = 'b';
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  memset(entity_1, 'E', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[41] = 'C';
}