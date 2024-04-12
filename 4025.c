void fun()
{
  int entity_7 = 27;
  char entity_4[93] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_6[45] = "";
  entity_6 = NULL;
  memset(entity_4, 's', 93-1);
  entity_4[93-1]='';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[2-1]='';
  memset(entity_6, 'z', 45-1);
  entity_6[45-1]='';
  entity_4[81] = 'D';
}