void fun()
{
  int entity_6 = 78;
  char* entity_9;
  char entity_4[76] = "";
  entity_4 = NULL;
  memset(entity_4, 'e', 76-1);
  entity_4[76-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  entity_6 = 91;
  entity_4[entity_6] = 'o';
}