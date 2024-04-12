void fun()
{
  int entity_8 = 28;
  char* entity_9;
  char entity_7[51] = "";
  entity_7 = NULL;
  memset(entity_7, 'T', 51-1);
  entity_7[51-1]='';
  entity_9 = (char*)malloc(47*sizeof(char));
  entity_9[47-1]='';
  entity_7[entity_8] = 'B';
}