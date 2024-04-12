void fun()
{
  int entity_7 = 28;
  char entity_9[70] = "";
  char entity_6[88] = "";
  char* entity_1;
  memset(entity_6, 'Z', 88-1);
  entity_6[88-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'C', 70-1);
  entity_9[70-1]='0';
  strcpy(entity_1, entity_6);
}