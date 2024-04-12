void fun()
{
  int entity_9 = 61;
  char entity_5[13] = "";
  entity_5 = NULL;
  char* entity_3;
  char entity_4[83] = "";
  entity_4 = NULL;
  char entity_7 = 'O';
  memset(entity_5, 'F', 13-1);
  entity_5[13-1]='';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memset(entity_4, 'v', 83-1);
  entity_4[83-1]='';
  entity_4[entity_9] = 'h';
}