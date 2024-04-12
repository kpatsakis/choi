void fun()
{
  int entity_6 = 71;
  char* entity_3;
  char entity_8[90] = "";
  entity_8 = NULL;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_8, 'D', 90-1);
  entity_8[90-1]='';
  memset(entity_9, 'u', entity_6-1);
  entity_9[entity_6-1]='';
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  entity_6 = 12;
  entity_9[91] = 'r';
}