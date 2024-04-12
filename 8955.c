void fun()
{
  int entity_8 = 16;
  char* entity_6;
  char entity_9[3] = "";
  entity_9 = NULL;
  memset(entity_9, 'j', 3-1);
  entity_9[3-1]='';
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  entity_9[entity_8] = 'n';
}