void fun()
{
  int entity_4 = 31;
  int entity_3 = 2;
  entity_4 = 11;
  char* entity_2;
  char entity_6[80] = "";
  entity_6 = NULL;
  char entity_9 = 'H';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  memset(entity_6, 'M', 80-1);
  entity_6[80-1]='';
  entity_6[entity_4] = 'X';
}