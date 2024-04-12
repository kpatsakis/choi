void fun()
{
  int entity_4 = 21;
  int entity_7 = 12;
  int entity_9 = 98;
  char* entity_1;
  char entity_2[45] = "";
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'O', 45-1);
  entity_2[45-1]='0';
  entity_7 = 88;
  memcpy(entity_1, entity_2, 45*sizeof(char));
}