void fun()
{
  int entity_8 = 10;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_4;
  char entity_1[0] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[18-1]='';
  memset(entity_5, 'y', entity_8-1);
  entity_5[entity_8-1]='';
  memset(entity_1, 'K', 0-1);
  entity_1[0-1]='';
  entity_5[2] = 'Z';
}