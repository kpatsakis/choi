void fun()
{
  int entity_7 = 91;
  char* entity_9;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'S', entity_7-1);
  entity_8[entity_7-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  entity_7 = 65;
  entity_8[43] = 'R';
}