void fun()
{
  int entity_9 = 37;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  memset(entity_3, 'n', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_1, 'x', 1-1);
  entity_1[1-1]='';
  entity_9 = 99;
  entity_3[67] = 'T';
}