void fun()
{
  int entity_2 = 2;
  char* entity_5;
  char entity_6[86] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  memset(entity_6, 'N', 86-1);
  entity_6[86-1]='';
  entity_2 = 64;
  entity_6[entity_2] = 'g';
}