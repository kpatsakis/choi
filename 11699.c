void fun()
{
  char entity_6[45] = "";
  char* entity_8;
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'C', 45-1);
  entity_6[45-1]='0';
  memcpy(entity_8, entity_6, 45*sizeof(char));
}