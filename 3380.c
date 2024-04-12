void fun()
{
  int entity_1 = 13;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  memset(entity_4, 'm', 71-1);
  entity_4[71-1]='';
  entity_1 = 3;
  entity_4[entity_1] = 'W';
}