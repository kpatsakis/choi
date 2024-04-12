void fun()
{
  int entity_2 = 49;
  int entity_8 = 48;
  char entity_1[1] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'j', 1-1);
  entity_1[1-1]='';
  entity_9 = (char*)malloc(8*sizeof(char));
  entity_9[8-1]='';
  entity_1[entity_8] = 's';
}