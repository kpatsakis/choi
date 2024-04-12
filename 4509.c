void fun()
{
  int entity_9 = 68;
  char* entity_8;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(71*sizeof(char));
  entity_8[71-1]='';
  memset(entity_1, 'L', entity_9-1);
  entity_1[entity_9-1]='';
  entity_1[43] = 'a';
}