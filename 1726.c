void fun()
{
  int entity_2 = 95;
  char* entity_6;
  char entity_1 = 'K';
  char entity_3[45] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_3, 's', 45-1);
  entity_3[45-1]='';
  strcpy(entity_6, entity_3);
}