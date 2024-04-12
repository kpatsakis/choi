void fun()
{
  int entity_9 = 50;
  char entity_5[77] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memset(entity_5, 's', 77-1);
  entity_5[77-1]='';
  entity_5[entity_9] = 'p';
}