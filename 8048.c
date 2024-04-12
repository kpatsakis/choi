void fun()
{
  int entity_0 = 70;
  char* entity_1;
  char entity_8[45] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[56-1]='';
  memset(entity_8, 'h', 45-1);
  entity_8[45-1]='';
  memcpy(entity_1, entity_8, 45*sizeof(char));
}