void fun()
{
  int entity_4 = 38;
  int entity_5 = 90;
  entity_4 = 17;
  char* entity_3;
  char entity_7[88] = "";
  entity_7 = NULL;
  char entity_9 = 'w';
  memset(entity_7, 'j', 88-1);
  entity_7[88-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  strcpy(entity_3, entity_7);
}