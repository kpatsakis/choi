void fun()
{
  int entity_4 = 53;
  char* entity_6;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_0[16] = "";
  entity_0 = NULL;
  memset(entity_0, 'c', 16-1);
  entity_0[16-1]='';
  memset(entity_2, 'K', entity_4-1);
  entity_2[entity_4-1]='';
  entity_6 = (char*)malloc(31*sizeof(char));
  entity_6[31-1]='';
  entity_4 = 82;
  entity_2[67] = 'W';
}