void fun()
{
  int entity_1 = 88;
  int entity_0 = 94;
  entity_1 = 7;
  char* entity_9;
  char entity_4[68] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[1-1]='';
  memset(entity_4, 'E', 68-1);
  entity_4[68-1]='';
  entity_4[entity_1] = 'I';
}