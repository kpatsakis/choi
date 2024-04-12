void fun()
{
  char entity_2[93] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memset(entity_2, 'f', 93-1);
  entity_2[93-1]='';
  entity_2[46] = 'Q';
}