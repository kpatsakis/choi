void fun()
{
  int entity_3 = 99;
  char* entity_5;
  char entity_0[38] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_8[45] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  memset(entity_0, 'H', 38-1);
  entity_0[38-1]='';
  entity_5 = (char*)malloc(100*sizeof(char));
  entity_5[100-1]='';
  memset(entity_8, 'b', 45-1);
  entity_8[45-1]='';
  memcpy(entity_5, entity_0, 38*sizeof(char));
}