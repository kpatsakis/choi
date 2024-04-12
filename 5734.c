void fun()
{
  int entity_0 = 47;
  char entity_6[52] = "";
  entity_6 = NULL;
  char entity_7[45] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  memset(entity_6, 'B', 52-1);
  entity_6[52-1]='';
  memset(entity_7, 'c', 45-1);
  entity_7[45-1]='';
  entity_6[entity_0] = 'c';
}