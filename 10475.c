void fun()
{
  char entity_4 = 'o';
  char entity_1[45] = "";
  char* entity_5;
  memset(entity_1, 'E', 45-1);
  entity_1[45-1]='0';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[0]='0';
  entity_1[85] = 'a';
}