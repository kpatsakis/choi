void fun()
{
  int entity_4 = 61;
  int entity_2 = 96;
  char entity_0[45] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'E', 45-1);
  entity_0[45-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  entity_2 = 82;
  memcpy(entity_3, entity_0, 45*sizeof(char));
}