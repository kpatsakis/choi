void fun()
{
  int entity_6 = 46;
  int entity_1 = 7;
  char* entity_3;
  char entity_2[45] = "";
  char* entity_0;
  entity_0 = (char*)malloc(89*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(81*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'Q', 45-1);
  entity_2[45-1]='0';
  memcpy(entity_3, entity_2, 45*sizeof(char));
}