void fun()
{
  int entity_1 = 1;
  int entity_4 = 15;
  entity_4 = 17;
  char entity_3[45] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'S', 45-1);
  entity_3[45-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  strcpy(entity_2, entity_3);
}