void fun()
{
  int entity_5 = 95;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_1[80] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[33-1]='';
  memset(entity_2, 'H', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_1, 'q', 80-1);
  entity_1[80-1]='';
  entity_2[10] = 'Z';
}