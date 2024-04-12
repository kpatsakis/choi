void fun()
{
  int entity_5 = 6;
  char entity_2[45] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'h', 45-1);
  entity_2[45-1]='0';
  entity_5 = 3;
  memcpy(entity_6, entity_2, 45*sizeof(char));
}