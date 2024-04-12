void fun()
{
  int entity_0 = 16;
  char* entity_8;
  char entity_6[72] = "";
  entity_6 = NULL;
  char entity_7[45] = "";
  entity_7 = NULL;
  memset(entity_6, 'u', 72-1);
  entity_6[72-1]='';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[30-1]='';
  memset(entity_7, 'r', 45-1);
  entity_7[45-1]='';
  entity_7[entity_0] = 'e';
}