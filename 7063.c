void fun()
{
  int entity_9 = 11;
  char entity_5[39] = "";
  entity_5 = NULL;
  char entity_2[16] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'Y', 16-1);
  entity_2[16-1]='';
  memset(entity_5, 'W', 39-1);
  entity_5[39-1]='';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[76-1]='';
  entity_5[entity_9] = 'k';
}