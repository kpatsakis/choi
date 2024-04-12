void fun()
{
  int entity_5 = 16;
  entity_5 = 17;
  char entity_4[58] = "";
  entity_4 = NULL;
  char entity_9 = 'W';
  char* entity_2;
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[41-1]='';
  memset(entity_4, 'Y', 58-1);
  entity_4[58-1]='';
  entity_4[entity_5] = 'R';
}