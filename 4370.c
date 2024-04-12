void fun()
{
  int entity_6 = 49;
  char entity_2[17] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'x', 17-1);
  entity_2[17-1]='';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  entity_2[entity_6] = 'p';
}