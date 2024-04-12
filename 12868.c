void fun()
{
  int entity_9 = 25;
  char entity_3 = 'k';
  char entity_4[45] = "";
  char* entity_5;
  char* entity_6;
  char entity_2 = 'L';
  memset(entity_4, 's', 45-1);
  entity_4[45-1]='0';
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}