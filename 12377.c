void fun()
{
  int entity_8 = 44;
  char entity_3 = 'a';
  char entity_4 = 'm';
  char entity_2[9] = "";
  char entity_7[45] = "";
  char* entity_9;
  memset(entity_2, 'Z', 9-1);
  entity_2[9-1]='0';
  memset(entity_7, 'Q', 45-1);
  entity_7[45-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, 9*sizeof(char));
}