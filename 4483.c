void fun()
{
  int entity_2 = 83;
  entity_2 = 56;
  char* entity_6;
  char entity_3 = 'L';
  char entity_5[47] = "";
  entity_5 = NULL;
  char entity_0 = 'W';
  char entity_9[71] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_9, 'R', 71-1);
  entity_9[71-1]='';
  memset(entity_5, 'r', 47-1);
  entity_5[47-1]='';
  strcpy(entity_6, entity_5);
}