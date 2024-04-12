void fun()
{
  int entity_9 = 70;
  char entity_0 = 'y';
  char entity_8[53] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_8, 'h', 53-1);
  entity_8[53-1]='';
  entity_9 = 72;
  strcpy(entity_3, entity_8);
}