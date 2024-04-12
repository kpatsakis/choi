void fun()
{
  char entity_6[45] = "";
  char* entity_0;
  char entity_7[68] = "";
  memset(entity_6, 'B', 45-1);
  entity_6[45-1]='0';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'n', 68-1);
  entity_7[68-1]='0';
  memcpy(entity_0, entity_6, 45*sizeof(char));
}