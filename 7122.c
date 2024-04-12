void fun()
{
  int entity_5 = 30;
  char entity_2[80] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'g', 80-1);
  entity_2[80-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  strcpy(entity_1, entity_2);
}