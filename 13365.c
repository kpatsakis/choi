void fun()
{
  int entity_7 = 66;
  int entity_5 = 22;
  char* entity_2;
  char entity_9[24] = "";
  char entity_8[92] = "";
  char entity_6[45] = "";
  memset(entity_6, 'N', 45-1);
  entity_6[45-1]='0';
  memset(entity_9, 'm', 24-1);
  entity_9[24-1]='0';
  memset(entity_8, 'h', 92-1);
  entity_8[92-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  entity_7 = 74;
  strcpy(entity_2, entity_8);
}