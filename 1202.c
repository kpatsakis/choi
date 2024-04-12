void fun()
{
  int entity_2 = 71;
  char entity_3 = 'X';
  char* entity_1;
  char entity_6[10] = "";
  entity_6 = NULL;
  char entity_9 = 'u';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  memset(entity_6, 'k', 10-1);
  entity_6[10-1]='';
  entity_6[entity_2] = 'y';
}