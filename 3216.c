void fun()
{
  int entity_6 = 8;
  char entity_9[58] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_3;
  memset(entity_9, 'Y', 58-1);
  entity_9[58-1]='';
  entity_3 = (char*)malloc(17*sizeof(char));
  entity_3[17-1]='';
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[75-1]='';
  entity_6 = 86;
  entity_9[entity_6] = 'X';
}