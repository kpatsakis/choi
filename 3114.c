void fun()
{
  int entity_4 = 68;
  char* entity_9;
  char entity_3[81] = "";
  entity_3 = NULL;
  char entity_7[7] = "";
  entity_7 = NULL;
  memset(entity_7, 't', 7-1);
  entity_7[7-1]='';
  entity_9 = (char*)malloc(8*sizeof(char));
  entity_9[8-1]='';
  memset(entity_3, 'J', 81-1);
  entity_3[81-1]='';
  entity_3[78] = 'D';
}