void fun()
{
  int entity_4 = 66;
  char entity_0[84] = "";
  entity_0 = NULL;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_5, 'I', entity_4-1);
  entity_5[entity_4-1]='';
  memset(entity_0, 'D', 84-1);
  entity_0[84-1]='';
  entity_5[95] = 'c';
}