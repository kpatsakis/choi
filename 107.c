void fun()
{
  int entity_2 = 75;
  char* entity_7;
  char entity_6[58] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  memset(entity_6, 'W', 58-1);
  entity_6[58-1]='';
  entity_2 = 70;
  entity_6[entity_2] = 'X';
}