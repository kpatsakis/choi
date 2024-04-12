void fun()
{
  int entity_7 = 73;
  char entity_9 = 'G';
  char entity_3[58] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'B', 58-1);
  entity_3[58-1]='';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  entity_3[entity_7] = 's';
}