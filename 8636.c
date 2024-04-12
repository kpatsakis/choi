void fun()
{
  int entity_2 = 84;
  char* entity_1;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'C', entity_2-1);
  entity_3[entity_2-1]='';
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[50-1]='';
  strcpy(entity_1, entity_3);
}