void fun()
{
  int entity_3 = 60;
  int entity_8 = 32;
  entity_3 = 83;
  char entity_7[45] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_7, 'N', 45-1);
  entity_7[45-1]='';
  memcpy(entity_0, entity_7, 45*sizeof(char));
}