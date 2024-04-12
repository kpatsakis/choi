void fun()
{
  int entity_7 = 81;
  char* entity_3;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_9, 'r', entity_7-1);
  entity_9[entity_7-1]='';
  entity_9[15] = 'm';
}