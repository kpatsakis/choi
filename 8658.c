void fun()
{
  int entity_8 = 83;
  int entity_5 = 72;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'G', entity_8-1);
  entity_4[entity_8-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  entity_4[40] = 'k';
}