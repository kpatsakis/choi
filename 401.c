void fun()
{
  int entity_2 = 77;
  int entity_9 = 18;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_4 = 'c';
  char* entity_5;
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  memset(entity_6, 'T', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[3] = 'o';
}