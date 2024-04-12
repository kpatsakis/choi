void fun()
{
  int entity_6 = 9;
  char* entity_1;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  memset(entity_8, 'Q', entity_6-1);
  entity_8[entity_6-1]='';
  entity_6 = 68;
  entity_8[6] = 'm';
}