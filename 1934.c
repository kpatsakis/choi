void fun()
{
  int entity_5 = 83;
  int entity_8 = 80;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  memset(entity_1, 'O', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 70;
  entity_1[80] = 'J';
}