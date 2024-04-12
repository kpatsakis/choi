void fun()
{
  int entity_4 = 77;
  char* entity_9;
  char entity_7[6] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_7, 'f', 6-1);
  entity_7[6-1]='';
  entity_4 = 54;
  entity_7[entity_4] = 'Z';
}