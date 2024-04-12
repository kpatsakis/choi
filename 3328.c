void fun()
{
  int entity_9 = 27;
  char* entity_6;
  char entity_2 = 'r';
  char entity_7[30] = "";
  entity_7 = NULL;
  memset(entity_7, 'Q', 30-1);
  entity_7[30-1]='';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[82-1]='';
  entity_7[entity_9] = 'Q';
}