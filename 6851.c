void fun()
{
  int entity_4 = 88;
  char* entity_7;
  char entity_6[90] = "";
  entity_6 = NULL;
  memset(entity_6, 'c', 90-1);
  entity_6[90-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  entity_6[entity_4] = 'B';
}