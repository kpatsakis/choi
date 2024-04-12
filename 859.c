void fun()
{
  int entity_0 = 48;
  char entity_9[80] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_3[57] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[51-1]='';
  memset(entity_9, 'B', 80-1);
  entity_9[80-1]='';
  memset(entity_3, 'A', 57-1);
  entity_3[57-1]='';
  entity_3[entity_0] = 'T';
}