void fun()
{
  int entity_1 = 94;
  char* entity_2;
  char entity_6[27] = "";
  entity_6 = NULL;
  char entity_4 = 'A';
  memset(entity_6, 'N', 27-1);
  entity_6[27-1]='';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  entity_6[45] = 'L';
}