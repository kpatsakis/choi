void fun()
{
  int entity_1 = 100;
  char* entity_2;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', entity_1-1);
  entity_3[entity_1-1]='';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  strcpy(entity_2, entity_3);
}