void fun()
{
  int entity_0 = 42;
  entity_0 = 42;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_8[45] = "";
  entity_8 = NULL;
  char entity_2 = 'a';
  char* entity_6;
  char* entity_9;
  memset(entity_3, 'Y', entity_0-1);
  entity_3[entity_0-1]='';
  memset(entity_8, 'o', 45-1);
  entity_8[45-1]='';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  strcpy(entity_9, entity_3);
}