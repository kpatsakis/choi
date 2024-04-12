void fun()
{
  char* entity_7;
  char entity_4[45] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memset(entity_4, 'h', 45-1);
  entity_4[45-1]='';
  memcpy(entity_7, entity_4, 45*sizeof(char));
}