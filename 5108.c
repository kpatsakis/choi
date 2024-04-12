void fun()
{
  int entity_4 = 31;
  char* entity_5;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(8*sizeof(char));
  entity_5[8-1]='';
  memset(entity_3, 'A', entity_4-1);
  entity_3[entity_4-1]='';
  entity_4 = 43;
  entity_3[98] = 'H';
}