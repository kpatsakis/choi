void fun()
{
  int entity_0 = 94;
  char entity_4[40] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_1 = 'e';
  char entity_7[88] = "";
  entity_7 = NULL;
  memset(entity_7, 'W', 88-1);
  entity_7[88-1]='';
  memset(entity_4, 'p', 40-1);
  entity_4[40-1]='';
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  entity_4[entity_0] = 'v';
}