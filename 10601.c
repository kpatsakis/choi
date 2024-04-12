void fun()
{
  char entity_4[45] = "";
  char* entity_8;
  char* entity_2;
  memset(entity_4, 'C', 45-1);
  entity_4[45-1]='0';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[0]='0';
  entity_4[38] = 'v';
}