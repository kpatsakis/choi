void fun()
{
  int entity_8 = 34;
  int entity_1 = 10;
  char entity_6[26] = "";
  entity_6 = NULL;
  char* entity_5;
  memset(entity_6, 'R', 26-1);
  entity_6[26-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memcpy(entity_5, entity_6, 26*sizeof(char));
}