void fun()
{
  int entity_1 = 59;
  char entity_7[45] = "";
  char entity_6 = 'h';
  char* entity_9;
  char entity_0 = 'T';
  char* entity_8;
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'F', 45-1);
  entity_7[45-1]='0';
  strcpy(entity_9, entity_7);
}