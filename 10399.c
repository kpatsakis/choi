void fun()
{
  int entity_4 = 10;
  char entity_1[87] = "";
  char* entity_3;
  memset(entity_1, 'O', 87-1);
  entity_1[87-1]='0';
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[0]='0';
  entity_1[45] = 'E';
}