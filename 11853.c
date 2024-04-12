void fun()
{
  char* entity_6;
  char entity_9[3] = "";
  char entity_5[45] = "";
  char entity_8 = 'L';
  memset(entity_5, 'I', 45-1);
  entity_5[45-1]='0';
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'S', 3-1);
  entity_9[3-1]='0';
  strcpy(entity_6, entity_5);
}