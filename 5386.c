void fun()
{
  int entity_3 = 5;
  char* entity_8;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', entity_3-1);
  entity_6[entity_3-1]='';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  entity_6[6] = 'W';
}