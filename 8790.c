void fun()
{
  int entity_4 = 16;
  char* entity_1;
  char entity_2 = 'm';
  char entity_5[84] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_5, 'p', 84-1);
  entity_5[84-1]='';
  memcpy(entity_1, entity_5, 84*sizeof(char));
}