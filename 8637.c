void fun()
{
  int entity_8 = 0;
  char entity_7[51] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'X', 51-1);
  entity_7[51-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  entity_7[72] = 'c';
}