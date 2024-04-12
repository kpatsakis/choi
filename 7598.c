void fun()
{
  int entity_7 = 11;
  int entity_3 = 41;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_1[99] = "";
  entity_1 = NULL;
  memset(entity_4, 'E', entity_7-1);
  entity_4[entity_7-1]='';
  memset(entity_1, 'o', 99-1);
  entity_1[99-1]='';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  entity_7 = 59;
  entity_4[10] = 'H';
}