void fun()
{
  int entity_9 = 53;
  char entity_0 = 'B';
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[80-1]='';
  memset(entity_2, 'Y', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 48;
  entity_2[43] = 'Q';
}