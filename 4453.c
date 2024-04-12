void fun()
{
  int entity_0 = 70;
  char entity_2[45] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'H', 45-1);
  entity_2[45-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memcpy(entity_3, entity_2, 45*sizeof(char));
}