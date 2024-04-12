void fun()
{
  int entity_9 = 80;
  int entity_0 = 46;
  char entity_5[40] = "";
  entity_5 = NULL;
  char* entity_6;
  char entity_2[79] = "";
  entity_2 = NULL;
  memset(entity_2, 'l', 79-1);
  entity_2[79-1]='';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  memset(entity_5, 'Z', 40-1);
  entity_5[40-1]='';
  entity_2[entity_9] = 't';
}