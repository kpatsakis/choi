void fun()
{
  int entity_5 = 95;
  char entity_6 = 'b';
  char* entity_3;
  char entity_9 = 'f';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_2, 'x', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_3, entity_2);
}