void fun()
{
  int entity_1 = 74;
  char entity_9[31] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  memset(entity_9, 't', 31-1);
  entity_9[31-1]='';
  entity_1 = 100;
  entity_9[entity_1] = 'K';
}