void fun()
{
  char entity_8[45] = "";
  char* entity_0;
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'z', 45-1);
  entity_8[45-1]='0';
  entity_8[77] = 'a';
}