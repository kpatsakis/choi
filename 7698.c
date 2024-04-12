void fun()
{
  int entity_1 = 66;
  int entity_0 = 20;
  char entity_2[45] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'm', 45-1);
  entity_2[45-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  entity_1 = 13;
  memcpy(entity_8, entity_2, 45*sizeof(char));
}